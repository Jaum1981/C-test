#include <iostream>
#include <vector>

using namespace std;

//função selectionsort
void selectionsort(vector<int> &v){
    int i, j, min;
    for(i = 0; i < v.size()-1; i++){
        min = i;
        for(j = i+1; j < v.size(); j++){
            if(v[j] < v[min]){
                min = j;
            }
        }
        if(min != i){
            int aux = v[i];
            v[i] = v[min];
            v[min] = aux;
            qtd++;
        }
    }
}
