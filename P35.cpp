#include <cstdio>  
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;

printVector(vector<int>& v) {
    cout << "[ ";
    for (int x:v)
            cout << x << " ";
    cout <<"] " << endl;
}

int searchInsert(vector<int>& A, int target) {
	int lo = 0, hi = A.size()-1;
	while (lo <= hi) {
		int mid = lo + (hi-lo) / 2;
		if (A[mid] == target)
			return mid;
		else if (A[mid] > target) 
			hi = mid - 1;
		else 
			lo = mid + 1;
	}
	return lo;
}

int main(int argc, char** argv) {
	int n[] = {1, 3, 5, 6};
	vector<int> v(n, n+4);
	cout << searchInsert(v, 7) << endl;
    return 0;
}