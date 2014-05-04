#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
        vector <string> list;

        bool word_flag = false;
        int word_start = 0;
        int i;
        string result = "";
        int size = s.size();

        for(i = 0; i < size; ++i){
            if(s[i] == ' '){
                if(word_flag){
                    list.push_back(s.substr(word_start, i - word_start));
                    word_flag = false;
                }
            }else{
                if(!word_flag){
                  word_flag = true;
                  word_start = i;
                }
            }
        }
        if(word_flag){
            list.push_back(s.substr(word_start, size));
        }

        size = list.size();

        for(i = size - 1; i > 0; --i){
            result += list[i] + " ";
        }
        if(size > 0) result += list[0];
        s = result;
    }
};

int main(){
  string s = "a";
  Solution *p = new Solution();
  p->reverseWords(s);
  cout << s << endl;
}