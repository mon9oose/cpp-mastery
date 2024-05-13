#include <iostream>

// template 매개변수에 변수가 올 수 있음
template <typename T, int len>
class SimpleArray
{
private:
    T _list[len];

public:
    T &operator[](int index) { return _list[index]; }
    SimpleArray<T, len> &operator=(const SimpleArray<T, len> &ref)
    {
        for (auto i = 0; i < len; ++i)
            _list[i] = ref._list[i];
        return *this;
    }
};

int main(void)
{
    SimpleArray<int, 5> list1;
    for (int i = 0; i < 5; ++i)
        list1[i] = i * 10; // list1.operator[](i) = i * 10 => list1._list[i] = 1 * 10;

    SimpleArray<int, 5> list2;
    list2 = list1; // list2.operator=(list1);
    for (auto i = 0; i < 5; ++i)
        std::cout << list2[i] << std::endl;
}