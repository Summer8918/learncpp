#include<stdio.h>
#include<string.h>

/*memcpy指的是C和C++使用的内存拷贝函数，函数原型为void *memcpy(void *destin, void *source, unsigned n)；函数的功能是从源内存地址的起始位置开始拷贝若干个字节到目标内存地址中，即从源source中拷贝n个字节到目标destin中。
 * 函数原型为
 * #include <string.h>
    void *memcpy(void *to, const void *from, size_t count)
 * */
void* Memcpy(void *dest,const void *src,size_t count){
    char *pdest = (char*)dest;
    char *psrc=(char*)src;
    //从后往前复制，防止覆盖
    while(count--){
        *(pdest+count)=*(psrc+count);
    }
    return dest;
}

int main(){
    char *p="aabbccdd";
    char s[20]={0};
    Memcpy(s,p,strlen(p));
    printf("test1:%s\n",s);
    Memcpy(s+2,s,strlen(p));
    printf("test2:%s\n",s);
    return 0;
}
