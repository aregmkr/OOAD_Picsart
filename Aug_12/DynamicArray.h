#include <iostream> // for size_t


class DynamicArray
{
	private:
		int *array;
		size_t size;
		size_t capacity;

	public:
		// Constructors
		DynamicArray();
		DynamicArray(size_t capacity_value);
		DynamicArray(const DynamicArray& obj);
		DynamicArray(DynamicArray&& obj) noexcept;
		DynamicArray& operator=(DynamicArray&& other) noexcept;
		~DynamicArray();
		
		// Methods
		void push(const int& value);
		void push(int&& value);
		void display()const;
		int getArray(size_t index)const;
};
