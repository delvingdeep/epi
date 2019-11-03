/*
** H-Index of a researcher is the largest number h
** such that reseacher have published h number of papers
** which have been cited h number of times
*/

#include <iostream>
#include <vector>

class Solution
{
  public:
    int h_index(std::vector<int> citations) {
        sort(citations.begin(), citations.end());
        const int size = citations.size();
        for(int i = 0; i < size; i++) {
            if(citations[i] >= size - i) { 
                return  size - i; 
            }
        }
        return 0;
    }
};

int main()
{
    std::vector<int> v{1, 4, 1, 4, 2, 1, 3, 5, 6};
    Solution ans;
    std::cout << "Citations: ";
    for(int i = 0; i < v.size(); i++) { std::cout << v[i] << " "; }
    std::cout << "\nH-index : " << ans.h_index(v) << std::endl;
    
    return 0;
}