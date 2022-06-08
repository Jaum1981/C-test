#include <iostream>
#include <vector>

//função bubblesort
void bubbleSort(vector<int> &vec) {
        for (size_t i = 0; i < vec.size() - 1; ++i) {
            for (size_t j = 0; j < vec.size() - i - 1; ++j) {
                if (vec.at(j) > vec.at(j + 1)){
                    std::swap(vec.at(j), vec.at(j + 1));
                }
            }
        }
 }
