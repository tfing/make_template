#include <stdio.h>

extern int add(int a, int b);
int main (int argc, char** argv)
{
    printf("%d\n", add(10, 20));
    return 0;
}
