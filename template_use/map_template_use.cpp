#include <iostream>
using namespace std;
template<class T,class Pred>
void Map(T s, T e, T x, Pred op) {
    for(; s != e; ++s,++x) {
        *x = op(*s);
    }
}
int Cube(int x) {
    return x * x * x;
}
double Square(double x) { 
    return x * x;
}
int a[5] = {1,2,3,4,5}, b[5];
double d[5] = { 1.1,2.1,3.1,4.1,5.1} , c[5];

int main() {
    Map(a,a+5,b,Square);
    /*函数类型与函数指针匹配，实例化出以下函数:
void Map(int * s, int * e, int * x, double ( *op)(double)) {
	for(; s != e; ++s,++x) {
		*x = op(*s);
	}
}
     * */
    for(int i = 0;i < 5; ++i) cout << b[i] << ",";
    cout << endl;
    Map(a,a+5,b,Cube);
    for(int i = 0;i < 5; ++i) cout << b[i] << ",";
    cout << endl;
    Map(d,d+5,c,Square);
    for(int i = 0;i < 5; ++i) cout << c[i] << ",";
    cout << endl;
    return 0;
}
/*
 *输出
  1,4,9,16,25,
  1,8,27,64,125,
  1.21,4.41,9.61,16.81,26.01,
  */
