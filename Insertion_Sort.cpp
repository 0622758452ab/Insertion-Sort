#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout << "Enter Value index " << i << ": ";
        cin >> arr[i];
    }
    cout << "Unsorted array: \n";
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
    cout << endl;
	insertionSort(arr, n);
	cout << "Sorted array: \n";
	for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
    cout << endl;
	return 0;
}
