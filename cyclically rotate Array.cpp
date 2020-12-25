#include<iostream>
using namespace std;

void leftRotate(int arr[])
{
	int last = arr[1];
	for(int i = 3; i < 6; i = i + 2)
	{
		arr[i - 2] = arr[i];
	}
	arr[6 - 1] = last;
}
void rightRotate(int arr[])
{
	int start = arr[6 - 2];
	for(int i = 6 - 4; i >=0; i = i -2)
	{
		arr[i + 2] =arr[i];
		
	}
	arr[0] = start;
}
void Rotate(int arr[])
{
	leftRotate(arr);
	rightRotate(arr);
	for(int i = 0;i < 6; i++)
	{
		cout<<(arr[i])<<" ";
	}
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6}, i;
	

	Rotate(arr);

	return 0;
}
