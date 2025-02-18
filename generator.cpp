#include <bits/stdc++.h>
using namespace std;

int main(){
    ofstream fout("input.txt");
    fout << (long long)pow(10, 9) << endl;
    srand(time(NULL));

    for(int i=0; i<pow(10, 9); i++){
        fout << rand() << " ";
    }
}