
#include "Student.h"

template<typename T>
void selectionSort(T arr[], int n){
    for(int i = 0 ; i < n ; i ++){
        int minIndex = i;
        for (int j = i+1; j < n ; j ++) {
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
//int main(){
	
//    float b[4] = {4.4,3.3,2.2,1.1};
//    selectionSort(b, 4);
//    for (int i = 0; i < 4; ++i) {
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
//
//    string c[4] = {"D","C","B","A"};
//    selectionSort(c, 4);
//    for (int i = 0; i < 4; ++i) {
//        cout<<c[i]<<" ";
//    }
//    cout<<endl;
//
//    Student d[4] = { {"D",90} , {"C",80} , {"B",70} , {"A",60} };
//    selectionSort(d, 4);
//    for (int i = 0; i < 4; ++i) {
//        cout<<d[i]<<" ";
//    }
//    cout<<endl;
//    return 0;
//}


