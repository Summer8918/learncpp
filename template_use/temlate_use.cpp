template <class T>
void Swap(T & x,T & y)
{
	T tmp = x;
  	x = y;
	y = tmp;
}
//求数组最大元素的MaxElement函数模板
template <class T>
T MaxElement(T a[], int size) //size是数组元素个数
{
    T tmpMax = a[0];
    for( int i = 1;i < size;++i)
        if( tmpMax < a[i] )
            tmpMax = a[i];
    return tmpMax;
}
int main()
{
	int n = 1,m = 2;
	Swap(n,m); //编译器自动生成 void Swap(int & ,int & )函数
	double f = 1.2,g = 2.3;
	Swap(f,g); //编译器自动生成 void Swap(double & ,double & )函数
	return 0;
}
