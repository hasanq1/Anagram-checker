//
//  main.cpp
//  HPEA9
//
//  Created by Hasan Qureshi on 2/15/20.
//  Copyright © 2020 Hasan Qureshi. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool Anagram(string first, string second){
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    if(first!=second){
        cout<<"Your words ARE NOT anagrams "<<endl;
    return false;
    }
    else{
    for(int i=0; i<first.length();i++){
        cout<<"W1: "<< first[i]<<" W2: "<<second[i]<<endl;
    }
    }
    cout<<"Your words are anagrams "<<endl;
    return true;
}
int main(int argc, const char * argv[]) {
    string w1,w2;
    cout<<"Check if your program is an anagram "<<endl;
    cout<<"Enter word 1"<<endl;
    getline(cin,w1);
    cout<<"Enter word 2"<<endl;
    getline(cin,w2);
    
    Anagram(w1, w2);
    //cout << "Hello, World!"<< endl;
    return 0;
}
