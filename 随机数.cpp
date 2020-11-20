#include <iostream>
#include <ctime>
#include <cstdlib>

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 10
 
using namespace std;
 
// int main ()
// {
//    int i,j;
 
//    // 设置种子
// //    srand( (unsigned)time( NULL ) ); 
//    srand( 1 ); 
 
//    /* 生成 10 个随机数 */
//    for( i = 0; i < 10; i++ )
//    {
//       // 生成实际的随机数
//       j= rand();
//       cout <<"随机数： " << j << endl;
//    }
 
//    return 0;
// }

int main( void)
{
    int number[MAX] = {0};
    int i;
    srand((unsigned) time(NULL)); /*播种子*/
    for(i = 0; i < MAX; i++)
    {
        number[i] = rand() % 100; /*产生100以内的随机整数*/
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}