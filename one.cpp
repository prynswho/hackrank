#include<bits/stdc++.h>
using namespace std;


// https://www.hackerrank.com/challenges/append-and-delete/problem?isFullScreen=true
string appendAndDelete(string s, string t, int k)
{
    if (s == t)
        return "Yes";
    int last;
    int count = 0;
    string delta;
    if (s.size() > t.size())
        last = t.size();
    else
        last = s.size();
    int check = 0;
    while (check < s.size() && check < t.size())
    {
        if (s[check] != t[check])
            break;
        check++;
    }
    cout << check << endl;
    if (check == 0)
    {
        if (s.size() + t.size() <= k)
            return "Yes";
    }
    int i = s.size() - check;
    cout << i << endl;

    int j = t.size() - check;
    cout << j << endl;
    int kj = i + j;
    cout << kj << endl;
    if (kj == k)
        return "Yes";
    else
        return "No";
}



//https://www.hackerrank.com/challenges/append-and-delete/submissions/code/250876171

string appendAndDelete(string s, string t, int k) {
    int cl=0;
    while(cl<s.size() && cl<t.size()){
        if(s[cl]!=t[cl]) break;
        cl++;
    }
    if(s.size()-cl+t.size()-cl<=k&& (s.size()-cl+t.size()-cl)%2==k%2){
        return "Yes";
    }
    else if(s.size()+t.size()<=k){
        return "Yes";
    }
    else return "No";
    return 0;
    
}

//https://www.hackerrank.com/challenges/repeated-string/submissions/code/248355542

long repeatedString(string s, long n) {
    string str;
    char find = 'a';
    int count = 0;
    int len = s.size();
    long nos = floor((n/len));
    for (char i:s){
        if (i == find) count ++;
    }
    long countReal = count * nos;
    long f = n - (nos * len); 
    for (long i = 0; i < f; i++){
        if (s[i] == find) countReal++;
    }
    return countReal;

}








