#include<iostream>
using namespace std;
void bubble_sort(int array[],int size )
{
	for(int x=0;x<size-1;x++)
	{
		for(int y=x+1;y<size;y++)
		{
			if(array[x]>array[y])
			{
				swap(array[x],array[y]);
			}
		}
	}
}
void display(int array[],int size)
{
	for(int x=0;x<size;x++)
	{
		cout<<array[x]<<" ";
	}
}
int main()
{
	int size=5;
	cout<<"enter the array which you wanna sort from bubble sort"<<endl;
	int array[size];
	for(int x=0;x<size;x++)
	{
		cout<<"enter the value no "<<x+1<<endl;
		cin>>array[x];
	}
	bubble_sort(array,size);
	display(array,size);


}
