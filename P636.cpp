#include <cstdio>  
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctype.h> // <cctype> isalpha isdigit
#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <string>   // std:string std:stoi
#include <queue>
#include <deque>

using namespace std;

void printVector(vector<int>& v) {
    cout << "[ ";
    for (auto x:v)
        cout << x << " ";
    cout <<"] " << endl;
}

vector<int> exclusiveTime(int n, vector<string>& logs) { 
    vector<int> res(n), stk(logs.size()+2);
    int k=0, ctime, ltime; 
    int id;
    char str[10];
    for (auto log : logs) {
        // Note: use sscanf or stringstream to parse input 
        sscanf(log.c_str(), "%d:%[a-z]:%d", &id, str, &ctime);
        if (str[0] == 's') { // if start
            if(k>0) res[stk[k-1]] += ctime - ltime;
            stk[k++] = id; 
        } else {
            // Note: ++citme 
            res[stk[k-1]] += ++ctime - ltime;
            k--;
        }
        ltime = ctime;
    }
    return res;
}

int main(int argc, char** argv) {
    return 0;
}