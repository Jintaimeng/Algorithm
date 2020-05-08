using namespace std;

template<typename T>
void insertionSort(T arr[], int n){
	for(int i = 1 ; i < n ; i ++){
		T e = arr[i];
		int j;
		for(j = i; j > 0 && e < arr[j-1]; j --){
			arr[j] = arr[j-1];
		}
		arr[j] = e;
	}
}

template<typename T>
void insertionSort(T arr[], int l, int r){
	for(int i = l+1 ; i <= r ; i ++){
		T e = arr[i];
		int j;
		for(j = i; j > l && e < arr[j-1]; j --){
			arr[j] = arr[j-1];
		}
		arr[j] = e;
	}
	return;
}
