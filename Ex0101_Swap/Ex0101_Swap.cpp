#include <iostream>

using namespace std;

/*
int MySwapValue(int i, int j)
{
	// TODO:

	return ? ;
}

void MySwapPtr(int* i, int* j)
{
	// TODO:
}
*/

void MySwapRef(int& i, int& j)
{
	// TODO:
	int temp = i;
	i = j;
	j = temp;
}

bool CheckSorted(int a, int b)
{
	if (a > b)
		return false;
	else
		return true;
}

void MySwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	// Swap
	//{
	//	int a = 3;
	//	int b = 2;

	//	cout << a << " " << b << endl;

	//	// TODO:
	//	//int temp = b;
	//	//b = a;
	//	//a = temp;
	//	//MySwap(&a, &b);
	//	MySwapRef(a, b);

	//	cout << a << " " << b << endl;
	//}


	// 정렬(sorting)
	//{
	//	int arr[] = { 9, 3 };

	//	cout << arr[0] << " " << arr[1] << endl;

	//	// TODO:
	//	if(arr[0] > arr[1])
	//		MySwapRef(arr[0], arr[1]);

	//	cout << arr[0] << " " << arr[1] << endl;
	//}

	// 값과 상관 없이 항상 작은 값이 먼저 출력되게 하려면?
	// 두 값이 같을 때는 순서가 상관 없음 -> 큰 값이 먼저 출력되지 않게 하려면?
	{
		int arr[2];

		//for (int i = 0; i <= 4; i++)
		//{
		//	for (int j = 0; j <= 4; j++)
		//	{
		//		arr[0] = i;
		//		arr[1] = j;

		//		std::cout << boolalpha;
		//		std::cout << arr[0] << " " << arr[1] << " " << CheckSorted(arr[0], arr[1]) << std::endl;;
		//	}
		//}

		// TODO:
		for (int i = 0; i <= 4; i++)
		{
			for (int j = 0; j <= 4; j++)
			{
				arr[0] = i;
				arr[1] = j;

				if (arr[0] > arr[1])
					std::swap(arr[0], arr[1]);

				std::cout << boolalpha;
				std::cout << arr[0] << " " << arr[1] << " "
					<< CheckSorted(arr[0], arr[1]) << std::endl;
			}
		}
	}

	return 0;
}
