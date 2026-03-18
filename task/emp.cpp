#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// class Palindrome{
//     public: 

//     static bool isPalindrome(string word){
//         int j = word.size()-1;
//         int i = 0;
//         while(i<j){
//             if(tolower(word[i]) == tolower(word[j]) ) {
//                 i++;
//                 j--;
//                 continue;
//             }
//             else return false;
            
//         }
//         return true;
//     }
// };

class Utils{
   public: 
   
   static bool isPalindrome(string word){
        int j = word.size()-1;
        int i = 0;
        while(i<j){
            if(tolower(word[i]) == tolower(word[j])) {
                i++;
                j--;
                continue;
            }
            return false;
        }
        return true;

   }
};



int main(){
    
    // Palindrome p1;

    // cout<< p1.isPalindrome("radar")<<endl;

    Utils u;

    cout<< u.isPalindrome("radar")<< endl;

    
    return 0;
}