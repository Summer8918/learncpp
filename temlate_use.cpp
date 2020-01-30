template <class T>
void Swap(T & x,T & y)
{
	T tmp = x;
  	x = y;
	y = tmp;
}
int main()
{
	int n = 1,m = 2;
	Swap(n,m); //编译器自动生成 void Swap(int & ,int & )函数
	double f = 1.2,g = 2.3;
	Swap(f,g); //编译器自动生成 void Swap(double & ,double & )函数
	return 0;
}
