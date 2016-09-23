#include <iostream>
#define n 111111111
int main()
{
    int sum=0;
    for(int val=1;val<=n;++val)
        sum+=val;
    std::cout<<sum<<std::endl;
    return 0;
}
