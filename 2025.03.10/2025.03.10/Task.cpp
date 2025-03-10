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
	void expand();

public:
	ArrayList(int len = 10)
	{
		this->init(len);
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}
	~ArrayList()
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

	void pushBack(int element);
	void pushFront(int element);
	void insert(int index, int element);
	int popBack();
	int popFront();
	void extract(int index, int len)
	{
		int* a = (int*)malloc(sizeof(int) * this->len);
		for (int i = 0; i < index; ++i)
		{
			a[i] = this->data[i];
		}
		for (int i = index + 1; i < this->len; ++i)
		{
			a[i] = this->data[i];
		}
		for (int i = 0; i < this->len - 1; ++i)
		{
			this->data[i] = a[i];
			std::cout << this->data[i];
		}
		this->len = len - 1;
	}
	void reverse(int start, int end)
	{
		if (start > len)
		{
			for (int i = start; i > len; --i)
			{
				std::cout << this->data[i];
			}
		}
		else
		{
			for (int i = start; i < len; ++i)
			{
				std::cout << this->data[i];
			}
		}
	}
	int sum(int len)
	{
		int Sum_of_el = 0;
		for (int i = 0; i < this->len; ++i)
		{
			 Sum_of_el += this->data[i];
		}
		return Sum_of_el;
	}
	/// <summary>
	/// Второй по величине элемент
	/// </summary>
	int secondMax(int len)
	{
		int* a = (int*)malloc(sizeof(int) * this->len);
		for (int i = 0; i < this->len; ++i)
		{
			a[i] = this->data[i];
		}
		for (int i = 0; i < this->len; ++i)
		{
			for (int j = 0; j < this->len - i; ++i)
			{
				if (a[i] > a[i + 1])
				{
					int z = a[i];
					a[i] = a[i + 1];
					a[i + 1] = z;
				}
			}
		}
		int SecMax = a[this->len - 1];
		return SecMax;
	}
	/// <summary>
	/// индекс последнего минимального элемента
	/// </summary>
	int lastMinIndex(int len)
	{
		int* a = (int*)malloc(sizeof(int) * this->len);
		for (int i = 0; i < this->len; ++i)
		{
			a[i] = this->data[i];
		}
		for (int i = 0; i < this->len; ++i)
		{
			for (int j = 0; j < this->len - i; ++i)
			{
				if (a[i] > a[i + 1])
				{
					int z = a[i];
					a[i] = a[i + 1];
					a[i + 1] = z;
				}
			}
		}
		int i_min = a[this->len];
		int LastMinIndex = 0;
		for (int i = 0; i < this->len; ++i)
		{
			if (i_min > a[i])
			{
				i_min = a[i];
				LastMinIndex = i;
			}
		}
		return LastMinIndex;
	}
	/// <summary>
	/// сместить на k элементов вправо
	/// </summary>
	void shift(int k)
	{
		int i_start = 0;
		for (int i = 0; i < this->len; ++i)
		{
			if (i + k > this->len)
			{
				i_start = i;
				break;
			}
		}
		for (int i = i_start; i < this->len; ++i)
		{
			std::cout << this->data[i];
		}
		for (int i = 0; i < i_start; ++i)
		{
			std::cout << this->data[i];
		}
	}
	/// <summary>
	/// количество нечетных
	/// </summary>
	int countOdd(int len)
	{
		int k = 0;
		for (int i = 0; i < this->len; ++i)
		{
			if (this->data[i] % 2 == 1)
			{
				k += 1;
			}
		}
		return k;
	}
	/// <summary>
	/// сумма четных элементов
	/// </summary>
	int sumEven(int len)
	{
		int sum_of_even = 0;
		for (int i = 0; i < this->len; ++i)
		{
			if (this->data[i] % 2 == 0)
			{
				sum_of_even += this->data[i];
			}
		}
		return sum_of_even;
	}
};

int max(ArrayList list)
{
	int mx = list.get(0);
	for (int i = 0; i < list.count(); ++i)
	{
		mx = (mx > list.get(i) ? mx : list.get(i));
	}
	return mx;
}

int main(int argc, char* argv[])
{
	ArrayList list(10);
	list.randomize();
	list.print();
	printf("%d\n", max(list));
	return 0;
}