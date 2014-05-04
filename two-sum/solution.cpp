#include <vector>
#include <string>
#include <iostream>

using namespace std;

// too slow
// class Solution {
// public:
//     vector<int> twoSum(vector<int> &numbers, int target) {
//         int size = numbers.size();
//         vector <int> result;
//         for(int i = 0; i < size; ++i){
//             for(int j = i + 1; j < size; ++j){
//                 if(numbers[i] + numbers[j] == target){
//                     result.push_back(i + 1);
//                     result.push_back(j + 1);
//                 }
//             }
//         }
//         return result;
//     }
// };



int main(){
  vector <int> s = {2, 7, 11, 15};
  vector <int> result;
  Solution *p = new Solution();
  result = p->twoSum(s, 9);
  cout << result[0] << ", " << result[1] << endl;
}