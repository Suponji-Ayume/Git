#include <iostream>
using namespace std;

// 快速排序函数
void quickSort(int arr[], int left, int right) {
    if (left >= right) return;
    int i = left, j = right;
    int pivot = arr[left];
    while (i < j) {
        while (i < j && arr[j] >= pivot) --j;
        if (i < j) arr[i++] = arr[j];
        while (i < j && arr[i] <= pivot) ++i;
        if (i < j) arr[j--] = arr[i];
    }
    arr[i] = pivot;
    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}

// 测试快速排序
int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "排序前: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "排序后: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
