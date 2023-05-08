#include <iostream>
using namespace std;

void tampil(int arr[], int uk) {
  for (int i = 0; i < uk; i++)
    cout << arr[i] << " ";
}
int partisi(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[i + 1];
  arr[i + 1] = arr[high];
  arr[high] = temp;
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int p = partisi(arr, low, high);

    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
  }
}

int main() {
  int uk;
  cout << "\nMasukkan banyak data  yang ingin diurutkan : ";
  cin >> uk;
  int arr[uk];
  cout << "\nMasukan nilai : ";
  for (int i = 1; i <= uk; ++i) {
    cout << "\n";
    cin >> arr[i];
  }
  quickSort(arr, 0, uk);
  cout << "Hasil pengeluaran nilai yang diurutkan\n";
  tampil(arr, uk);
  return 0;
}