#include <cstdio>
#include <cstdlib>

class BoundCheckIntArray
{
private:
    int *_list;
    int _listLen;

public:
    /**
     * @brief Construct a new Bound Check Int Array object
     *
     * @param len
     */
    BoundCheckIntArray(int len) : _listLen(len)
    {
        _list = new int[len];
    }

    /**
     * @brief Destroy the Bound Check Int Array object
     *
     */
    ~BoundCheckIntArray()
    {
        delete[] _list;
    }

    /**
     * @brief Override '[]' operator
     *
     * @param index
     * @return int
     */
    int &operator[](int index)
    {
        if (index < 0 || index >= _listLen)
        {
            printf("array index out of bound exception\n");
            exit(1);
        }
        return _list[index];
    }
};

int main(void)
{
    BoundCheckIntArray list(5);
    for (auto i = 0; i < 5; ++i)
    {
        list[i] = (i + 1) * 111;
    }

    for (auto i = 0; i < 6; ++i)
    {
        printf("%d\n", list[i]);
    }

    return 0;
}