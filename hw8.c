#include <stdio.h>
#include <math.h>

double calculate(double arr[], int m) {
    double sum = 0.0, mean, standarddeviation = 0.0;

    for (int i = 0; i < m; i++) {
        sum += arr[i];
    }

    mean = sum / m;

    for (int i = 0; i < m; i++) {
        standarddeviation += pow(arr[i] - mean, 2);
    }

    return sqrt(standarddeviation / m);
}

int main() {
    double number[5];
    int m = 5;

    printf("5개의 실수를 입력하세요:\n");
    for (int i = 0; i < m; i++) {
        printf("숫자 %d: ", i + 1);
        scanf("%lf", &number[i]);
    }

    double stdDeviation = calculate(number, m);
    printf("입력된 숫자의 표준편차는: %.3lf\n", stdDeviation);

    return 0;
}
