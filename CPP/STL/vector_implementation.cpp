#include <iostream>

class Vector
{
private:
    int initial_value = {};
    int size = {};
    int capacity = {};
    int *arr;
    int *temp_arr;

public:
    Vector()
    {
        initial_value = 0;
        size = 0;
        capacity = 2;
        arr = new int[capacity];
    }
    void push(int value)
    {
        if (size < capacity)
        {
            arr[size] = value;
            size++;
        }
        else
        {
            capacity = 2 * capacity;
            temp_arr = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                temp_arr[i] = arr[i];
            }
            temp_arr[size] = value;
            size++;
            delete[] arr;
            arr = temp_arr;
        }
    }
    int getSize() const
    {
        return size;
    }

    ~Vector()
    {
        delete[] arr;
        delete[] temp_arr;
    }
};

int main()
{
    Vector v;
    v.push(1);
    v.push(1);
    v.push(1);
    v.push(1);
    v.push(1);
    v.push(1);
    v.push(1);
    v.push(1);
    v.push(1);
    std::cout << v.getSize() << std::endl;
    return 0;
}