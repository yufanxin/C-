#include <iostream>

void fn();
int main()
{
    fn();
    fn();
    fn();
}
void fn()
{
    static int  n = 10;
    std::cout << n << std::endl;
    n++;
}