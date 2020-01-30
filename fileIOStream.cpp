#include<iostream>
#include<fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ofstream fout("a1.out",ios::out); //打开，删除原有内容
    if(!fout){
        cout << "File open error!"<<endl;
    }
    for(int i=100;i>=0;i-=10){
        fout<<i<<" ";
    }
    fout<<endl;
    fout.close();
    vector<int> v;
    ifstream srcFile("a1.out",ios::in);
    ofstream destFile("out.txt",ios::out);
    int x;
    while( srcFile >> x ){
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for( int i = 0;i < v.size();i ++ ){
        destFile << v[i] << " ";
    }
    destFile.close();
    srcFile.close();
    return 0;
}
