/*年齢を計算するプログラム*/

#include <stdio.h>
int main(void)
{
    int i;
    printf("Please enter your age\n");
    scanf("%d", &i);
    i=2023-i;
    printf("You are %d years old",i);

}
