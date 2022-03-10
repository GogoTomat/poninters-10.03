#include <iostream>
#include <cmath>

using namespace std;



//int summ(int arr[], int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//		sum += *(arr + i); 
//	return sum;
//
//}


int main()
{
	//////int a = 5;
	//////a = 2;

	//////cout << a;

	////////int *px = &a;

	////////int* px2 = &a;
	////////

	//////////cout << px << " " << px2;

	////////*px = 2;


	////////int b = a;
	////////cout << a;

	////int x = 10;
	////int y = 5;

	////int* px = &x;
	////int* py;


	/////*cout << px << "\t" << &x << endl;
	////cout << *px << endl;*/

	////*px = 20;
	////cout << x << endl;

	////int x = 10;
	////int y;

	////int* px = &x;

	////cout << *px;

	///*cin >> x;
	//cin >> y;

	//int* px = &x;
	//int* py = &y;

	//if (*px > *py) {
	//	cout << *px;
	//}

	//else if(*px == *py) {
	//	cout << "They are equal.";
	//}

	//else {
	//	cout << *py;
	//}*/

	//int a;
	//cin >> a;
	//int* pa = &a;

	//if (*pa >= 0) cout << "Positive number";
	//else if (*pa < 0) cout << "Negative number";
	//else cout << 0;

	//const int SIZE = 5;
	//int arr[SIZE]{ 1, 2, 3, 4, 5 };

	//

	//int* pArr = arr;

	//cout << (pArr + 2) << endl;
	//

	//for (int i = 0; i < SIZE; i++) {
	//	cout << *(arr + i) << endl;
	//}

	//for (int i = 0; i < SIZE; i++) {
	//	cout << *(arr + i) << endl;
	//}

	//for (int i = 0; i < SIZE; i++) {
	//	cout << pArr[i] << endl;
	//}

	/*const int Size = 5;
	int arr[Size]{ 1,2,3,4,5 };




	int* pArr = arr;

	int summ = 0;

	for (int i = 0; i < Size; i++)
	{
		summ = summ + *(pArr + i);

	}
	cout << summ << endl;*/

//const int size = 5;
//int arr[size]{1, 2, 3, 4, 5 };
//
//cout << summ(arr, size) << endl;

int* ptr;
ptr = 0;//не рекомендуется
cout << ptr << endl;

int* ptr2;
ptr2 = NULL;
cout << ptr << endl;

int* ptr3;
ptr3 = nullptr;
cout << ptr3 << endl;

if (ptr3 == nullptr) {
	cout << "Pointer is zero";
}


return 0;


}

