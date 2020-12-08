#include <stdio.h>

int main() {
    int input;
    int count = 0;
    while (1){
    printf("odd %d times in while\n",count);
    scanf("%d", &input);
    if(input%2==0) count++;
    if(count==2) break;
    }
    printf("odd 2 times, exit this program\n",count);
  return 0;

}