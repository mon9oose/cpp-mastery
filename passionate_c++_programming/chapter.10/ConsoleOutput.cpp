#include <cstdio>

namespace mystd
{
    class MyCout
    {
    public:
        MyCout &operator<<(char *str)
        {
            printf("%s", str);
            return *this;
        }
        MyCout &operator<<(char c)
        {
            printf("%c", c);
            return *this;
        }
        MyCout &operator<<(int num)
        {
            printf("%d", num);
            return *this;
        }
        MyCout &operator<<(double e)
        {
            printf("%g", e);
            return *this;
        }
        MyCout &operator<<(MyCout &(*fp)(MyCout &c))
        {
            return fp(*this);
        }
    };

    MyCout &endl(MyCout &c)
    {
        c << '\n'; // c.operator<<('\n');
        fflush(stdout);
        return c;
    }

    MyCout cout;
}

int main(void)
{
    mystd::cout << "Simple String" << mystd::endl;
    mystd::cout << 'h' << mystd::endl;
    mystd::cout << 3.14 << mystd::endl;
    mystd::cout << mystd::endl;
    mystd::endl(mystd::cout);

    return 0;
}