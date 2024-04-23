#include <bits/stdc++.h>
using namespace std;

string findWord(char** vec, int rows, int cols, string word);

int main() {
    int rows,cols;
    cout << "Masukan Baris : ";
    cin >> rows;
    cout << "Masukan Kolom : ";
    cin >> cols;

    char** vec = new char*[rows];
    for (int i = 0; i < rows; i++) {
        vec[i] = new char[cols];
        for (int j = 0; j < cols; j++) {
            cin >> vec[i][j];
        }
    }

    cout << "Berapa Kata Yang Ingin Anda Cari? : ";
    int n; cin >> n;
    string word;
    for(int i = 0; i < n; i++){
        cin >> word;
        cout << "Kata '" << word << "' " << findWord(vec, rows, cols, word) << endl;
    }
    return 0;
}

string findWord(char** vec, int rows, int cols, string word){
    int lengthOfWord = word.size();
    string reverseWord = word;
    reverse(reverseWord.begin(), reverseWord.end());

    // diagonal kanan atas ke bawah
    for(int i = 0; i <= rows - lengthOfWord; i++){
        for(int j = 0; j <= cols - lengthOfWord; j++){
            string temp = "";
            for(int k = 0; k < lengthOfWord; k++){
                temp += tolower(vec[i + k][j + k]);
            }
            if(temp == word || temp == reverseWord){
                cout << i + 1 << " " << j + 1 << endl;
                return "Ada";
            }
        }
    }

    // diagonal kiris atas ke bawah
    for(int i = 0; i <= rows - lengthOfWord; i++){
        for(int j = cols - 1; j >= (lengthOfWord - 1); j--){
            string temp = "";
            for(int k = 0; k < lengthOfWord; k++){
                temp += tolower(vec[i + k][j - k]);
            }
            if(temp == word || temp == reverseWord){
                cout << i + 1 << " " << j + 1 << endl;
                return "Ada";
            }
        }
    }
    return "Tidak Ada";
}
