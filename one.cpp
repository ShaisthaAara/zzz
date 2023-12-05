#include <iostream>
using namespace std;
void func(int n)
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
    func(n + 1);
}
int main()
{
    func(9);
    return 0;
}