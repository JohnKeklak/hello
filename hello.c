#include <stdio.h>

int main ( int argc, char *argv)
{
    int i = 2;
    int j = 3;

    printf("hello, world\n");
    print("i: %d j: %d\n", i, j);
    print("i + j: %d\n", i + j);
    print("i * j: %d\n", i * j);
    print("i / j: %d\n", i / j);

    return 0;
}
