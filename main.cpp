#include <iostream>
#include <typeinfo>
#include "SortTestHelper.h"
//#include "SelectionSort.h"
//#include "InsertionSort.h"
//#include "MergeSort.h"
//#include "MergeSortBU.h"
//#include "QuickSort.h"
//#include "QuickSort2.h"
//#include "QuickSort3Ways.h"
//#include "Heap.h"
//#include "HeapSort.h"
//#include "BinarySearch.h"
//#include "BST.h"

#include "SparseGraph.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

//	MaxHeap<int> maxHeap = MaxHeap<int>(100);
//	srand(time(NULL));
//	for( int i = 0 ; i < 15 ; i ++ )
//		maxHeap.insert( rand()%100 );
//	while( !maxHeap.isEmpty() ){
//		cout<<maxHeap.extractMax()<<" ";
//	} 
	//maxHeap.testPrint();
	
//	int n = 50000;
//	cout<<"Test for random array, size = "<<n<<", random range [0, "<<n<<"]"<<endl;
//    int *arr1 = SortTestHelper::generateRandomArray(n,0,n);
//    int *arr2 = SortTestHelper::copyIntArray(arr1, n);
//    int *arr3 = SortTestHelper::copyIntArray(arr1, n);
//    int *arr4 = SortTestHelper::copyIntArray(arr1, n);
//    SortTestHelper::testSort("Merge Sort", mergeSort, arr1, n);
//    SortTestHelper::testSort("Quick Sort", quickSort, arr2, n);    
//    SortTestHelper::testSort("Quick Sort3Ways", quickSort3Ways, arr3, n);
//    SortTestHelper::testSort("Heap Sort1", heapSort1, arr4, n);
//	delete[] arr1;
//	delete[] arr2;
//	delete[] arr3;
//	delete[] arr4;
//	
//	int swapTimes = 100; 
//	cout<<"Test for nearly ordered array, size = "<<n<<", swap time = "<<swapTimes<<endl;   
//    arr1 = SortTestHelper::generateNearlyOrderedArray(n, swapTimes);
//    arr2 = SortTestHelper::copyIntArray(arr1, n);
//    arr3 = SortTestHelper::copyIntArray(arr1, n);
//    arr4 = SortTestHelper::copyIntArray(arr1, n);
//    SortTestHelper::testSort("Merge Sort", mergeSort, arr1, n);
//    SortTestHelper::testSort("Quick Sort", quickSort, arr2, n);
//    SortTestHelper::testSort("Quick Sort3Ways", quickSort3Ways, arr3, n);
//    SortTestHelper::testSort("Heap Sort1", heapSort1, arr4, n);
//	delete[] arr1;
//	delete[] arr2;
//	delete[] arr3;
//	delete[] arr4;
//	
//	cout<<"Test for random array, size = "<<n<<", random range [0, 10]"<<endl;
//    arr1 = SortTestHelper::generateRandomArray(n,0,10);
//    arr2 = SortTestHelper::copyIntArray(arr1, n);
//    arr3 = SortTestHelper::copyIntArray(arr1, n);
//    arr4 = SortTestHelper::copyIntArray(arr1, n);
//    SortTestHelper::testSort("Merge Sort", mergeSort, arr1, n);
//    SortTestHelper::testSort("Quick Sort", quickSort, arr2, n);
//    SortTestHelper::testSort("Quick Sort3Ways", quickSort3Ways, arr3, n);
//    SortTestHelper::testSort("Heap Sort1", heapSort1, arr4, n);
//	delete[] arr1;
//	delete[] arr2;
//	delete[] arr3;
//	delete[] arr4;
	
	int N = 10;
	int M = 50;
	srand(time(NULL));
	
	SparseGraph g1(N, false);
	for(int i = 0 ; i < M ; i ++){
		int a = rand()%N;
		int b = rand()%N;
		g1.addEdge(a, b);
	}
	for(int v = 0 ; v < M ; v ++){
		cout<<v<<" : ";
		SparseGraph::adjIterator adj(g1, v);
		for( int w = adj.begin() ; !adj.end() ; w = adj.next() ){
			cout<<w<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
