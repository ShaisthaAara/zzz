#include <iostream>
using namespace std;
void fun(int n)
{
    // int n= 65;
    if (n >= 90)
    {
        return;
    }
    if (n % 2 == 0)
    {
        n = n + 1;
    }

    cout << char(n) << " ";
    fun(n + 1);
}
int main()
{
    fun(9);
    return 0;
}