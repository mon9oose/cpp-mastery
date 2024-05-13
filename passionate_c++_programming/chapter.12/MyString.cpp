// 1. 문자열을 인자로 전달받은 생성자의 정의
// 2. 생성자, 소멸자, 복사 생성자 그리고 대입 연산자의 정의
// 3. 결합된 문자열로 초기화된 객체를 반환하는 + 연산자의 오버로딩
// 4. 문자열을 덧붙이는 += 연산자의 오버로딩
// 5. 내용 비교를 진행하는 == 연산자의 오버로딩
// 6. 콘솔입출력이 가능하도록 <<, >> 연산자의 오버로딩
#include <cstdlib>
#include <cstring>
#include <iostream>

class MyString
{
private:
    char *_str;
    int _length;

public:
    MyString()
    {
        _str = nullptr;
        _length = 0;
    }
    MyString(const char *str)
    {
        _length = strlen(str) + 1;
        _str = new char[_length];
        strcpy(_str, str);
    }
    MyString(const MyString &str)
    {
        _length = str._length;
        _str = new char[_length];
        strcpy(_str, str._str);
    }
    ~MyString()
    {
        if (_str = nullptr)
            return;
        delete[] _str;
    }

    MyString &operator=(const MyString &str)
    {
        if (_str == nullptr)
            delete[] _str;
        _length = str._length;
        _str = new char[_length];
        strcpy(_str, str._str);
        return *this;
    }
    MyString &operator+=(const MyString &str)
    {
        _length += str._length - 1;
        char *tmp = new char[_length];
        strcpy(tmp, _str);
        strcat(tmp, str._str);
        if (_str != nullptr)
            delete[] _str;
        _str = tmp;
        return *this;
    }
    bool operator==(const MyString &str)
    {
        return strcmp(_str, str._str) == 0;
    }
    MyString &operator+(const MyString &str)
    {
        char *tmp = new char[_length + str._length - 1];
        strcpy(tmp, _str);
        strcat(tmp, str._str);

        MyString tmpStr(tmp);
        delete[] tmp;
        return tmpStr;
    }
    friend std::ostream &operator<<(std::ostream &os, const MyString &str);
    friend std::istream &operator>>(std::istream &is, const MyString &str);
};

std::ostream &operator<<(std::ostream &os, const MyString &str)
{
    os << str._str;
}

std::istream &operator>>(std::istream &is, MyString &str)
{
    char data[100];
    is >> data;
    str = MyString(data);
    return is;
}