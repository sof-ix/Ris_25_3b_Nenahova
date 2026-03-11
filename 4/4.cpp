#include <iostream>
#include <clocale>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите кол-во знаков массива:";
    cin >> n;
    int arr[100];
    int min = 0;
    int max = 0;
    int s = 0;
    int otv = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = rand()%100;
        cout << arr[i] << endl;
        if (arr[i] < min) {
            min = i;
        }
        if (arr[i] > max) {
            max = i;
        }
        s += arr[i];
    }
    swap(arr[min], arr[max]);
    otv = (s / n);
    cout << "\n" <<"среднее арифметическое: "<< otv << endl <<"среднее арифметическое с которым сравниваем: "<< otv + otv / 10 << "\n\n";
    int nn = 0;
    for (int i = 0; i < n; i++) {
        if ((otv + otv / 10)>=  arr[i]) {
            nn++;
        }
    }
    cout << "кол-во подходящих чисел: "<< nn << "\n\n";
    for (int i = 0; i < nn; i++) {
        if (otv + otv / 10 < arr[i]) {
            for (int j = i; j < n; j++) {
                if (otv + otv / 10 <= arr[i]) {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
    cout << "итоговый массив: "<< endl;
    for (int i = 0; i < nn; i++) {
        cout << arr[i] << endl;
    }
}

