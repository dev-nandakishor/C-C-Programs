#include<bits/stdc++.h>

using namespace std;

        template<class T>
size_t mySizeOf(T)
{
        T temp1;
        return (char*)(&temp1 + 1) - (char*)(&temp1);
}
int main()
{
        int num = 10;
        long numl = 100;
        long long numll = 1000;
        unsigned int num_un_sz = 5000;

        cout<<"size of int="<<mySizeOf(num) << endl;
        cout<<"size of long="<<mySizeOf(numl) << endl;
        cout<<"size of long long ="<<mySizeOf(numll) << endl;
        cout<<"size of unsigned int="<<mySizeOf(num_un_sz) << endl;
        return 0;
}