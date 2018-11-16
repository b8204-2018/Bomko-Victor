#include <iostream>

int main() {

    printf("Vvedite kolichestvo yacheek massiva:\n ");
    int cells,sum;
    scanf("%d",&cells);
    int *p = new int[cells];
    sum = 0;
    for (int i = 0; i <cells ; i++) {
        printf("Vvedite %i element massiva:\n",i);
        scanf("%d",&p[i]);
        sum = sum + p[i];
    }
     printf("Summa elementov = %d",sum);

    return 0;
}