#include <bits/stdc++.h>
using namespace std;

string findWord(char vec[23][23], string word);

int main() {
        char vec[23][23] = {
        {'A', 'A', 'F', 'L', 'K', 'H', 'P', 'F', 'S', 'S', 'U', 'F', 'I', 'C', 'I', 'C', 'L', 'E', 'S', 'G', 'N', 'N', 'H'},
        {'S', 'F', 'V', 'R', 'E', 'O', 'M', 'R', 'W', 'L', 'R', 'T', 'T', 'S', 'X', 'O', 'Q', 'Q', 'N', 'A', 'O', 'A', 'O'},
        {'Q', 'E', 'I', 'A', 'I', 'F', 'X', 'A', 'E', 'I', 'R', 'F', 'V', 'F', 'Y', 'S', 'X', 'I', 'M', 'I', 'N', 'J', 'I'},
        {'W', 'S', 'T', 'R', 'L', 'G', 'O', 'C', 'A', 'P', 'B', 'I', 'A', 'F', 'I', 'W', 'I', 'W', 'T', 'U', 'A', 'C', 'M'},
        {'F', 'E', 'Y', 'A', 'E', 'A', 'I', 'S', 'T', 'P', 'C', 'R', 'L', 'U', 'J', 'K', 'O', 'A', 'K', 'C', 'E', 'R', 'S'},
        {'R', 'V', 'D', 'A', 'K', 'P', 'N', 'D', 'E', 'E', 'H', 'D', 'E', 'M', 'S', 'N', 'C', 'K', 'K', 'F', 'O', 'A', 'H'},
        {'M', 'R', 'N', 'E', 'D', 'S', 'L', 'C', 'R', 'R', 'I', 'W', 'N', 'R', 'S', 'A', 'A', 'F', 'I', 'T', 'M', 'M', 'I'},
        {'Y', 'A', 'A', 'E', 'C', 'I', 'E', 'A', 'H', 'Y', 'M', 'O', 'T', 'A', 'V', 'H', 'R', 'S', 'S', 'T', 'I', 'S', 'B'},
        {'R', 'J', 'S', 'E', 'W', 'E', 'L', 'C', 'C', 'E', 'N', 'N', 'I', 'E', 'T', 'O', 'H', 'W', 'S', 'G', 'L', 'S', 'E'},
        {'A', 'T', 'A', 'N', 'Y', 'Y', 'M', 'O', 'I', 'E', 'E', 'S', 'N', 'E', 'S', 'I', 'O', 'I', 'R', 'E', 'L', 'T', 'R'},
        {'U', 'T', 'E', 'N', 'E', 'W', 'E', 'B', 'H', 'M', 'Y', 'B', 'E', 'T', 'N', 'N', 'R', 'A', 'I', 'E', 'B', 'E', 'N'},
        {'R', 'C', 'L', 'K', 'U', 'T', 'E', 'A', 'E', 'Q', 'J', 'L', 'S', 'G', 'S', 'H', 'T', 'G', 'D', 'S', 'K', 'O', 'A'},
        {'B', 'H', 'O', 'I', 'C', 'A', 'T', 'N', 'R', 'R', 'S', 'D', 'D', 'E', 'C', 'E', 'H', 'O', 'O', 'L', 'G', 'I', 'T'},
        {'E', 'N', 'S', 'L', 'U', 'A', 'R', 'I', 'R', 'S', 'E', 'T', 'A', 'L', 'O', 'C', 'O', 'H', 'C', 'T', 'O', 'H', 'E'},
        {'F', 'Z', 'F', 'U', 'D', 'Q', 'J', 'Y', 'M', 'A', 'D', 'O', 'Y', 'I', 'W', 'Y', 'G', 'L', 'O', 'V', 'E', 'S', 'U'},
        {'T', 'E', 'K', 'A', 'L', 'F', 'W', 'O', 'N', 'S', 'N', 'A', 'E', 'B', 'M', 'I', 'E', 'J', 'T', 'Z', 'N', 'T', 'G'},
        {'E', 'S', 'W', 'P', 'O', 'S', 'J', 'X', 'E', 'U', 'T', 'U', 'Y', 'O', 'Z', 'U', 'W', 'A', 'K', 'E', 'Z', 'H', 'M'},
        {'K', 'Z', 'U', 'H', 'B', 'P', 'E', 'Z', 'E', 'E', 'R', 'F', 'L', 'M', 'S', 'N', 'O', 'W', 'B', 'A', 'L', 'L', 'H'},
        {'N', 'S', 'N', 'O', 'W', 'B', 'O', 'A', 'R', 'D', 'Y', 'T', 'V', 'W', 'Y', 'C', 'L', 'E', 'V', 'O', 'H', 'S', 'A'},
        {'A', 'C', 'O', 'C', 'R', 'Q', 'L', 'G', 'Z', 'I', 'Y', 'C', 'H', 'O', 'D', 'R', 'A', 'Z', 'Z', 'I', 'L', 'B', 'I'},
        {'L', 'B', 'V', 'K', 'K', 'W', 'A', 'N', 'Z', 'A', 'A', 'Q', 'I', 'N', 'W', 'O', 'L', 'P', 'W', 'O', 'N', 'S', 'L'},
        {'B', 'F', 'R', 'E', 'E', 'Z', 'I', 'N', 'G', 'R', 'A', 'I', 'N', 'S', 'L', 'I', 'L', 'G', 'T', 'M', 'E', 'L', 'T'},
        {'H', 'O', 'P', 'Y', 'L', 'W', 'H', 'F', 'M', 'N', 'F', 'F', 'U', 'F', 'P', 'S', 'W', 'X', 'N', 'U', 'M', 'M', 'V'}
    };

    int n; cin >> n;
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        cout << findWord(vec, word) << endl;
    }
    return 0;
}

string findWord(char vec [23][23], string word){
    int lengthOfWord = word.size();
    string reverseWord = word;
    reverse(reverseWord.begin(), reverseWord.end());

    // diagonal kiri atas ke bawah
    for(int i = 0; i <= 23 - lengthOfWord; i++){
        for(int j = 0; j <= 23 - lengthOfWord; j++){
            string temp = "";
            for(int k = 0; k < lengthOfWord; k++){
                temp += tolower(vec[i + k][j + k]);
            }
            if(temp == word || temp == reverseWord){
                return "Ada";
            }
        }
    }

    // diagonal kanan atas ke bawah
    for(int i = 0; i <= 23 - lengthOfWord; i++){
        for(int j = 23 - 1; j >= (lengthOfWord - 1); j--){
            string temp = "";
            for(int k = 0; k < lengthOfWord; k++){
                temp += tolower(vec[i + k][j - k]);
            }
            if(temp == word || temp == reverseWord){
                return "Ada";
            }
        }
    }

    // vertikal
    for(int i = 0; i <= 23 - lengthOfWord; i++){
        for(int j = 0; j < 23; j++){
            string temp = "";
            for(int k = 0; k < lengthOfWord; k++){
                temp += tolower(vec[i + k][j]);
            }
            if(temp == word || temp == reverseWord){
                return "Ada";
            }
        }
    }

    // horizontal
    for(int i = 0; i < 23; i++){
        for(int j = 0; j <= 23 - lengthOfWord; j++){
            string temp = "";
            for(int k = 0; k < lengthOfWord; k++){
                temp += tolower(vec[i][j + k]);
            }
            if(temp == word || temp == reverseWord){
                return "Ada";
            }
        }
    }
    return "Tidak Ada";
}
