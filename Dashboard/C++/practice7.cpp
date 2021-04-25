#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k, item;
    cin >> n >> q;
    vector< vector<int> > vec(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        
        for(int j = 0; j < k; j++)
        {
            cin >> item;
            vec[i].push_back(item);
        }
            
    }
    
    int m, p;
    for(int k = 0; k < q; k++)
    {
        cin >> m >> p;
        cout << vec[m][p] << endl;
    }
        
    return 0;
}
