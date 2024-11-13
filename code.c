#include <stdio.h>

unsigned int my_money = 0; // 잔고 변수, 초기 돈은 0원이다.

int main(void) {

    char select[3];
    
    while(1) {
        printf("------환영합니다!------\n");
        printf("잔고 : %d\n", my_money);
        printf("> 출석      > 도박\n");
        scanf_s("선택 단어를 입력하세요 : %s", select);

        printf("test : %s", select);
    }

    return 0;
}