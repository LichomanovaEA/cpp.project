class Range
{
private:
	int _size;
	int* _arr;
public:
	Range(int size, int* arr)
	{
		_size = size;
		_arr = arr;
	}
	void print()
	{
		std:: cout << "Size:" << _size << endl;
		cout << "Array elements is:" << endl;
		for (unsigned int i = 0; i < _size; i++) {
			cout << _arr[i] << endl;
		}
	}
};

