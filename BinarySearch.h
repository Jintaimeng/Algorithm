
using namespace std;
template <typename T>
int binarySearch(T arr[], int n, T target){
	int l = 0, r = n-1;
	while( l<=r ){
		int mid = l+(r-l)/2;
		if(arr[mid] == target)
			return mid;
		if(arr[mid] < target)
			l = mid+1;
		else
			r = mid-1;
	}
	return -1;
}
