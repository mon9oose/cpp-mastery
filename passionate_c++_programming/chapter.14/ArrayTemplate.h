#ifndef __ARRAY_TEMPLATE_INCLUDED__
#define __ARRAY_TEMPLATE_INCLUDED__

#include <iostream>

template <typename T>
class BoundCheckArray
{
private:
    T *_list;
    int _len;
    // 복사 생성자를 통한 객체 생성을 막음
    BoundCheckArray(const BoundCheckArray &list) {}
    // 기본 '=' operator를 통한 객체 생성을 막음
    BoundCheckArray &operator=(const BoundCheckArray &list) {}

public:
    /**
     * @brief Construct a new Bound Check Array object
     *
     * @param len
     */
    BoundCheckArray(int len);

    /**
     * @brief Destroy the Bound Check Array object
     *
     */
    ~BoundCheckArray() { delete[] _list; }

    /**
     * @brief array length를 참고하여 안전하게 object를 반환해주는 함수
     *
     * @param index
     * @return T&
     */
    T &operator[](int index)
    {
        if (index < 0 || index >= _len)
        {
            std::cout << "Array index out of bound exception" << std::endl;
            exit(1);
        }
        return _list[index];
    }

    /**
     * @brief array length를 참고하여 T 객체를 반환해주는 함수
     *
     * @param index
     * @return T
     */
    T operator[](int index) const
    {
        if (index < 0 || index >= _len)
        {
            std::cout << "Array index out of bound exception" << std::endl;
            exit(1);
        }
        return _list[index];
    }

    /**
     * @brief return array size;
     *
     * @return int
     */
    int Size() const { return _len; }
};

template <typename T>
BoundCheckArray<T>::BoundCheckArray(int len) : _len(len)
{
    _list = new T[len];
}

#endif