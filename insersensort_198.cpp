

#include <iostream>

using namespace std;

int arr[20];
int n;

void input() {
	while (true)
	{
		cout << "Masukan Jumlah Data Array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\nArray yang ansa masukan maksimal 28 Elemen.\n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "masukan element array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[1];
	}
}

void insertinsort() {
	int temp;
	int j;

	for (int i = 1; i < n; i++) {
		temp = arr[i];

		j = i - 1;

		while (j >= 0 && arr[j] > temp)

		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;

		cout << "\nPass" << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
	}
}

void display() {
	cout << endl;
	cout << "\n=========================" << endl;
	cout << "elemet array telah tersusun" << endl;
	cout << "===========================" << endl;

	for (int j = 0;  n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
	input();
    insertinsort;
	display();
}





	
	

