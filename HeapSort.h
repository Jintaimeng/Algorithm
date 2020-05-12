#include "Heap.h"

using namespace std;
template<typename T>
void heapSort1(T arr[], int n){
	MaxHeap<T> maxHeap = MaxHeap<T>(n);
	for(int i = 0 ; i < n ; i ++){
		maxHeap.insert(arr[i]);
	}
	for(int i = n-1 ; i >=0 ; i --){
		arr[i] = maxHeap.extractMax();
	}
}
