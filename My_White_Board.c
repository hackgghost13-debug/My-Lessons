#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h> // linux / mac
// # include <windows.h> // Win
#include <time.h>

int sqar(int num)
{
    return num * num;
}

int main()
{
    int x = sqar(2);
    int y = sqar(3);
    int z = sqar(4);
    printf("%d %d %d\n", x,y,z);

    return 0;
}