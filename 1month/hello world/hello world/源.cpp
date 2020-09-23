#include <iostream>
using namespace std;
enum time
{
    first, second,
    third, forth, fifth
}a;

int main()
{
    a = fifth;
    if (a == fifth)
    {
        cout << "Succeed!";
    }
    return 0;
}