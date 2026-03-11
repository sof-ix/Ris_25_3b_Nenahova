#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL, "ru");
	int n,m, c=0, arr[50][50];
	cout << "Введите кол-во строк: ";
	cin>>n;
	cout << "Введите кол-во столбцов: ";
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 100;
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	cout << "Введите номер строки: ";
	cin >> c;
	for (int i = 0; i < n; i++) {
		int max = -1000;
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > max) max = arr[i][j];
		}
		if (c == i+1)
			cout << "Максимальный элемент строки: " << max<<endl;
	}
	int t = arr[n][m - 1];

	for (int i = 0; i < n; i++) {
		for (int j = m-2; j >=0; j--) {
			arr[i][j+4] = arr[i][j];
		}
	}
	arr[0][0] = t;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}
	

}