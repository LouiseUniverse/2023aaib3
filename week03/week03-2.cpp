//字串string 字元char 的差別
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    printf("%d\n",'a');///單引號代表一個字母，會對應一個數值
    printf("%d\n","a");///雙引號代表很多個字母(字串)，就是陣列和指標

    if('a'==97) printf("其實'a'是數值97\n");
}
