#include <stdio.h>

int main(int argc, const char * argv[]) {
    int number ;
    int sum = 0 ;
    int count = 0 ;
    
    printf("请输入正整数，最后输入—1停止\n");
    scanf("%d", &number);
    while ( number != -1 ) {
        sum += number ;
        count ++;
        scanf("%d",&number);
    }
    
    printf("平均数是%f\n",1.0*sum/count);
    return 0;
}
