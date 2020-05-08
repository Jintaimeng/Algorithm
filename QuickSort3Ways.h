//#include "InsertionSort.h"
/*ÈýÂ·¿ìÅÅ*/


template<typename T>
void __quickSort3Ways(T arr[], int l, int r){
//	if(l >= r)	
//		return;
	if(r-l <= 15){
		insertionSort(arr, l, r);
		return;
	}
	//partition
	swap(arr[l], arr[rand() % (r-l+1)+l]);
	T v = arr[l];
	int lt = l;//arr[l...lt] < v
	int gt = r+1;//arr[gt...r] > v	 
	for(int i = l+1 ; i < gt ; i ++){
		if(arr[i] < v){
			swap(arr[++lt], arr[i]);
		}
		if(arr[i] > v){
			swap(arr[--gt], arr[i]);
			i --;
		}
	}
	swap(arr[l], arr[lt]);
	__quickSort3Ways(arr, l, lt-1);
	__quickSort3Ways(arr, gt, r);
}

template<typename T>
void quickSort3Ways(T arr[], int n){
	srand(time(NULL));
	__quickSort3Ways(arr, 0, n-1);
}
