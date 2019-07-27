#include"sort.h"
int main()
{
	int x[] = { 12,3,4,78,9 };
	int n = sizeof(x) / sizeof(int);
	
	print(x, n);cout<<"  before sorting \n";
	Bubble_sort(x, n);
	print(x, n);
	cout << "  then  we use <buble sort>\n ";
	quick_sort(x, 0, n);
	print(x, n);
	cout << "  then  we use <quick sort>\n";
	merge_sort(x, 0, n);
	print(x, n);
	cout << "  then  we use <merge sort>\n";
	insert_sort(x, n);
	print(x, n);
	cout << "  then  we use <insert sort>\n";


}