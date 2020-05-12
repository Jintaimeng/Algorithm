#include <iostream>
#include <typeinfo>

#include "MaxHeap.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	MaxHeap<int> maxHeap = MaxHeap<int>(100);
	srand(time(NULL));
	for( int i = 0 ; i < 15 ; i ++ )
		maxHeap.insert( rand()%100 );
	while( !maxHeap.isEmpty() ){
		cout<<maxHeap.extractMax()<<" ";
	} 
	//maxHeap.testPrint();
	return 0;
}
