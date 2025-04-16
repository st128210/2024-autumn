#include<iostream>

class ArrayList
{
private:
	int len;
	int* data;
	void init(int len = 10)
	{
		this->len = len;
		this->data = (int*)malloc(sizeof(int) * len);
		if (this->data != nullptr)
		{
			for (int i = 0; i < len; ++i)
			{
				set(i, 0);
			}
		}
	}
	bool indexValid(int index)
	{
		return 0 <= index < this->len;
	}
	void expand(int added = 1)
	{
		int newlen = this->len + added;
		int* newdata = (int*)malloc(sizeof(int) * newlen);
		if (newdata != nullptr)
		{
			for (int i = 0; i < this->len; ++i)
			{
				newdata[i] = get(i);
			}
		}
		if (this->data != nullptr)
		{
			free(this->data);
			this->data = newdata;
		}
		this->len = newlen;
	}
	void contract(int reduced = 1)
	{
		if (reduced > len)
		{
			return;
		}
		int newlen = this->len - reduced;
		int* newdata = (int*)malloc(sizeof(int) * newlen);
		if (newdata != nullptr)
		{
			for (int i = 0; i < newlen; ++i)
			{
				newdata[i] = this->data[i];
			}
		}
		if (this->data != nullptr)
		{
			free(this->data);
			this->data = newdata;
			this->len = newlen;
		}
	}
	void swap(int i1, int i2)
	{
		int c = get(i1);
		set(i1, get(i2));
		set(i2, c);
	}

public:
	ArrayList(int len = 10)
	{
		this->init(len);
	}
	ArrayList(ArrayList& list)
	{
		this->init(list.len);
		for (int i = 0; i < list.len; ++i)
		{
			this->set(i, list.get(i));
		}
	}
	/*~ArrayList()
	{
		if (this->data != nullptr)
		{
			for (int i = 0; i < this->len; ++i)
			{
				this->data[i] = 0;
			}
			free(this->data);
			this->data = nullptr;
			this->len = 0;
		}
	}*/
	void randomize(int min = 10, int max = 99)
	{
		for (int i = 0; i < len; ++i)
		{
			data[i] = rand() % (max - min + 1) + min;
		}
	}
	void print()
	{
		for (int i = 0; i < this->len; ++i)
		{
			printf("%d ", this->data[i]);
		}
		printf("\n");
	}
	int get(int index)
	{
		if (indexValid(index))
		{
			return data[index];
		}
		return -1;
	}
	void set(int index, int value)
	{
		if (this->indexValid(index))
		{
			set(index, value);
		}
	}
	int count()
	{
		return len;
	}
	void pushBack(int element)
	{
		expand();
		set(len - 1, element);
	}
	void pushFront(int element)
	{
		pushBack(element);
		shift(1);
	}
	void insert(int index, int element)
	{
		expand();
		for (int i = len - 1; i > index; --i)
		{
			set(i, get(i - 1));
		}
		set(index, element);
	}
	int popBack()
	{
		int res = get(len - 1);
		contract();
		return res;
	}
	int popFront()
	{
		shift(-1);
		return popBack();
	}
	int extract(int index)
	{
		int res = get(index);
		for (int i = index; i < len - 1; ++i)
		{
			set(i, get(i + 1));
		}
		contract();
	}
	void reverse(int start, int end)
	{
		if (!indexValid(start) || !indexValid(end))
		{
			return;
		}
		int rnglen = end - start + 1;
		for (int i = 0; i < rnglen / 2; ++i)
		{
			swap(start + i, end - i);
		}
	}
	int sum()
	{
		int res = 0;
		for (int i = 0; i < len; ++i)
		{
			res += get(i);
		}
		return res;
	}
	/// <summary>
	/// Второй по величине элемент
	/// </summary>
	int secondMax()
	{
		int max1 = get(0);
		int max2 = get(0);
		for (int i = 0; i < this->len; ++i)
		{
			if (max1 <= get(i))
			{
				max2 = max1;
				max1 = get(i);
			}
			else if (max2 <= get(i))
			{
				max2 = get(i);
			}
		}
	}
	/// <summary>
	/// индекс последнего минимального элемента
	/// </summary>
	int lastMinIndex()
	{
		int MinIndex = 0;
		for (int i = 0; i < len; ++i)
		{
			if (get(i) <= get(MinIndex))
			{
				MinIndex = i;
			}
		}
		return MinIndex;
	}
	int shift(int k)					// 3
	{									// 0 1 2 3 4 5 6 7 8
		reverse(0, len - k - 1);		// 5 4 3 2 1 0 6 7 8 
		reverse(len - k, len - 1);		// 5 4 3 2 1 0 8 7 6  
		reverse(0, len - 1);			// 6 7 8 0 1 2 3 4 5
	}
	int countOdd()
	{
		int count = 0;
		for (int i = 0; i < len; ++i)
		{
			if (get(i) % 2 != 0)
			{
				++count;
			}
		}
		return count;
	}
	int sumEven()
	{
		int sum = 0;
		for (int i = 0; i < len; ++i)
		{
			if (get(i) % 2 == 0)
			{
				sum += get(i);
			}
		}
		return sum;
	}
};
int max(ArrayList list)
{
	int max = list.get(0);
	for (int i = 0; i < list.count(); ++i)
	{
		if (max < list.get(i))
		{
			max = list.get(i);
		}
	}
	return max;
}

int main(int argc, char* argv[])
{
	ArrayList array;
	array.randomize();
	array.sumEven();
	array.countOdd();
	array.print();
	return 0;
}