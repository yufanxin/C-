#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    n--;
    unsigned int u = (unsigned int)n;
    unsigned long long int v = (unsigned long long int)n;
    cout << "Unsigned int value for " << n << " is " << u << "(0x"
        << hex << u << ")" << endl;
    cout << "0x" << u << " increase 1 is " << (u + 1) << endl;
    cout << "Unsigned long long int value for " << dec << n << " is " << v << "(0x"
        << hex << v << ")" << endl;
    cout << "0x" << v << " increase 1 is " << (v + 1) << endl;
}
