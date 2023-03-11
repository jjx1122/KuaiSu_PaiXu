#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 100

void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//分划操作

void QuickSort(int* a, int low, int high) {
	int temp = a[low];
	if (low >= high) {
		;
	}
	else {
	int i = low;
	int j = high + 1;
	while (i < j) {
		do {
			i++;
		} while (temp > a[i]);
		do {
			j--;
		} while (temp < a[j]);
		if (i < j) {
			swap(a[i], a[j]);
		}
	}
	swap(a[low], a[j]);
	//a[low] = temp;
	int k = j;
	QuickSort(a, low, k - 1);
	QuickSort(a, k + 1, high);
    }
}
int main() {
	printf("输入数组：");
	int a[10] = {5,41,54,32,60,87,94,20,12,3};
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	QuickSort(a, 0, 9);
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}