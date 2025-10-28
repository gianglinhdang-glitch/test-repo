#include <iostream>
#include <algorithm>
using namespace std;






int main() {
	//bai 3

	int numarr;
	cin >> numarr;
	int arr1[100];
	for (int i = 0; i < numarr; i++)
	{
		cin >> arr1[i];
	}
	sort(arr1, arr1 + numarr);
	for (int i = 0; i < numarr; i++)
	{
		cout << arr1[i] << " ";
	}
	return 0;

}