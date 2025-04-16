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
	}
	bool indexValid(int index)
	{
		return 0 <= index < this->len;
	}
	void expand()
	{
		int* a = (int*)malloc(sizeof(int) * len + 1);
		for (int i = 0; i < len; ++i)
		{
			a[i] = data[i];
		}
		ArrayList(len + 1);
		for (int i = 0; i < len; ++i)
		{
			data[i] = a[i];
		}
		++len;
		free(a);
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
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}
	ArrayList()
	{
		free(this->data);
	}
	void randomize(int min = 10, int max = 99)
	{
		for (int i = 0; i < len; ++i)
		{
			this->data[i] = rand() % (max - min + 1) + min;
		}
	}
	void print()
	{
		for (int i = 0; i < len; ++i)
		{
			printf("%d ", this->data[i]);
		}
		printf("\n");
	}
	int get(int index)
	{
		if (indexValid(index))
		{
			return this->data[index];
		}
		return -1;
	}
	void set(int index, int value)
	{
		if (indexValid(index))
		{
			this->data[index] = value;
		}
	}
	int count()
	{
		return len;
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
		return res;
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
		int sum = 0;
		for (int i = 0; i < len; ++i)
		{
			sum += get(i);
		}
		return sum;
	}
	/// <summary>
	/// ������ �� �������� �������
	/// </summary>
	int secondMaX()
	{
		int max1 = get(0);
		int max2 = get(0);
		for (int i = 0; i < len; ++i)
		{
			if (max1 < get(i))
			{
				max2 = max1;
				max1 = get(i);
			}
			if (max2 < get(i))
			{
				max2 = get(i);
			}
		}
		return max2;
	}
	/// <summary>
	/// ������ ���������� ������������ ��������
	/// </summary>
	int lastMinIndex()
	{
		int LastMinIndex = 0;
		for (int i = 0; i < len; ++len)
		{
			if (get(i) <= get(LastMinIndex))
			{
				LastMinIndex = i;
			}
		}
		return LastMinIndex;
	}
	/// <summary>
	/// �������� �� k ��������� ������
	/// </summary>
	void shift(int k)
	{
		reverse(0, len - k - 1);
		reverse(len - k, len - 1);
		reverse(0, len - 1);
	}
	/// <summary>
	/// ���������� ��������
	/// </summary>
	int countOdd(int len)
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
	/// <summary>
	/// ����� ������ ���������
	/// </summary>
	int sumEven(int len)
	{
		int sum = 0;
		for (int i = 0; i < len; ++i)
		{
			if (get(i) % 2 == 0)
			{
				sum += data[i];
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
	//ArrayList list(10);
	/*list.randomize();
	list.print();
	printf("%d\n", max(list));*/
	std::cout << "Hello Biden";
	return 0;
}