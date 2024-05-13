#include <cstdio>
#include <cstdlib>

class BoundCheckIntArray
{
private:
    int *_list;
    int _length;
    BoundCheckIntArray(const BoundCheckIntArray &object) {}
    BoundCheckIntArray &operator=(const BoundCheckIntArray &object) {}

public:
    /**
     * @brief Construct a new Bound Check Int Array object
     *
     * @param len
     */
    BoundCheckIntArray(int len) : _length(len)
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
     * @brief
     *
     * @param index
     * @return int&
     */
    int &operator[](int index)
    {
        if (index < 0 || index >= _length)
        {
            printf("%s : %d", "outbound index", index);
            exit(1);
        }
        return _list[index];
    }

    int operator[](int index) const
    {
        if (index < 0 || index >= _length)
        {
            printf("%s : %d", "outbound index", index);
            exit(1);
        }
        return _list[index];
    }
    int GetLength() const { return _length; }
};

void ShowAllData(const BoundCheckIntArray &list)
{
    auto length = list.GetLength();
    for (auto i = 0; i < length; ++i)
    {
        printf("%d\n", list[i]);
    }
}

int main(void)
{
    BoundCheckIntArray arr(5);
    for (auto i = 0; i < 5; ++i)
        arr[i] = (i + 1) * 11;
    ShowAllData(arr);
    return 0;
}