#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int x = 0;

    fork();
    x++;
    sleep(5);
    wait(NULL);
    fork();
    wait(NULL);
    sleep(5);
    x++;
    printf("Valor de x: %d\n", x);

    return 0;
}
