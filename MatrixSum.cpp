#include<iostream>
using namespace std;

int main() {

	int row, col;
	cout << "Enter row and coloumn of matix: " << endl;
	cin >> row >> col;

	int M1[row][col], M2[row][col], Res[row][col];

	cout << "Enter elements of matix 1: " << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> M1[i][j];
		}
	}
	cout << "Enter elements of matix 2: " << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> M2[i][j];
		}
	}

	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++){
			Res[i][j] = M1[i][j] + M2[i][j];
		}
	}

	cout << "Sum of two matrix is: " << endl;
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++){
			cout << Res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}