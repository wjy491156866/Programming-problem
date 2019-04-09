
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n,a,b,c,y;
    cin >> n >> a >> b >> c;// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
    cout << n <<" "<< a << " "<< b <<" "<< c <<endl;
 
    //开始判断，y是可以得到的巧克力总数。
    if (n == a*c)    //如果钱刚刚好买a送b。
    {
        y = a + b;
    }
    if (n < a*c)    //如果钱不够买a，那就是最多买多少就买多少
    {
        y = n / c;
    }
    if (n > a*c)    //如果钱足够买a送b，那就看看能有几次送，然后再买多少送多少。
    {
        int count = n/(a*c);    //可以买几次满送
        int exp = n - count * (a*c);    //计算剩下的钱有多少
        y = (count * (a+b)) + (exp / (a*c)); 
    }
    cout<<y<<endl;
	system("pause");
    return 0;
}

