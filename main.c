#include <stdio.h>

int main(void) {
    // 判定対象の整数を標準入力から読み込む
    int inputNumber;
    scanf("%d", &inputNumber);

    // 0以上9以下、または12以上14以下の範囲内であるかを判定する
    int isValid = !(inputNumber < 0 || (inputNumber >= 10 && inputNumber < 12) || inputNumber >= 15);

    // 条件を満たす場合はOK、満たさない場合はNGを出力する
    if (isValid == 1) {
        printf("OK");
    } else {
        printf("NG");
    }

    return 0;
}
