#include <iostream>
#include <cstdio>
using namespace std;

int run()
{
    int result;

    __asm__(
        "movl $100, %0"
        : "=r"(result));

    return result;
}

int main()
{
    cout << "The skeleton code for the assembly language" << endl;
    printf("return value: %d\n", run());

    return 0;
}