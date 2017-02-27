/* Introducation of Algorithm
 * Capter 2-1   First Algorithm
 * ----------------------------
 *  INSERT-SORT(A)
 *
 *  for j = 2 to A.length
 *      key = A[j]
 *  // Insert A[j] into the sorted sequence A[1...j-1]
 *  i = j - 1
 *  while i > 0 and A[i] > key
 *      A[i + 1] = A[i]
 *      i = i - 1
 *  A[i + 1] = key
 *  ---------------------------------------------------
 *
 * Author: qisen
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main(){
    int num = 0;    int pos = 0;    int key = 0;    int ppos = 0;
    cout << "please input integer,end as #." << endl;
    while(cin >> num){
        v.push_back(num);
    }
    for(pos = 1;pos < v.size();pos++){
        key = v[pos];
        ppos = pos - 1;
        while(ppos >= 0 && v[ppos] > key){
            v[ppos + 1] = v[ppos];
            ppos -= 1;
        }
        v[ppos + 1] = key;
    }
    for(pos = 0;pos < v.size();pos++){
        cout << v[pos] << " ";
    }
    cout << endl;

    return 0;
}
