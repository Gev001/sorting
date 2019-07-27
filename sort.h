#include<iostream>
using namespace std;

void Bubble_sort(int* x, int n)
{
	bool t;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			if (x[j] < x[j + 1]) { swap(x[j], x[j + 1]); t = false; }
		}
		if (t)break;
	}
}

int partiton(int* x, int start, int end)
{
	int pindex = start, pivot = end - 1;
	for (int i = start; i < end - 1; ++i)
	{
		if (x[i] > x[pivot]) { swap(x[i], x[pindex]); ++pindex; }
	}
	swap(x[pivot], x[pindex]);
	return pindex+1;
}

void quick_sort(int* x, int start, int end)
{
	if (start < end)
	{
		int k = partiton(x, start, end);
		quick_sort(x, start, k - 1);
		quick_sort(x, k + 1, end);
	}
}

void merge_sort(int* x, int start, int end)
{
	if (start < end)
	{
		int mid = (start + end) / 2;
		int i = start, k = 0;
		int j = mid + 1;
		int l = end - start;
		int* temp = new int[l];
		while (i <= mid && j < end)
		{
			if (x[i] > x[j]) { temp[k++] = x[i++]; }
			else { temp[k++] = x[j++]; }
		}
		while (i <= mid) { temp[k++] = x[i++]; }
		while (j < end) { temp[k++] = x[j++]; }

		for (int m = start; m <end;++m)
		{
			x[m] = temp[m - start];
		}
		delete[] temp;
	}
}

void insert_sort(int* x, int n)
{
	for (int i = 1; i < n; ++i)
	{
		int p = x[i];
		int j = i;
		while (p >
			x[j - 1]&&j>0)
		{
			x[j] = x[j - 1];
			--j;
		}
		x[j] = p;

	}
}


void print(int* x, int n)
{
	for (int i = 0; i < n; ++i)
		cout << x[i] << " ";
}

#pragma once
