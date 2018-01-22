#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;

#define foreach(x, v) for (typeof (v).begin() x=(v).begin(); x !=(v).end(); ++x)
#define For(i, a, b) for (int i=(a); i<(b); ++i)
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size());
#define PII pair<int, int>
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define D(x) cerr << #x " is " << (x) << endl

const double EPS = 1e-9;
int cmp(double x, double y = 0, double tol = EPS) {
  return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;

class Solution {
public:
		bool isPrime(int x) {
			int ones=0;
			while (x) {
				ones++;
				x = x&(x-1);
			}
			for (int i=2; i*i<=ones; ++i){
				if (ones%i == 0) return false;
			}
			return true;
		}	

    int countPrimeSetBits(int L, int R) {
			int ret=0;
			for (int i=L; i<R; ++i) {
				if (isPrime(i))	
					ret++;
			}        
			return ret;
    }
};

