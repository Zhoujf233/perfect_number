//
//  main.cpp
//  perfect_number
//
//  Created by JF Zhou on 2019/8/15.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n,k,j=0,sum=1;
    for(n=6;n<=500;n++)
    {
        for(k=2;k<=n/2;k++)
        {
            if(n%k==0)sum+=k;
        }
        if(sum==n){j++;cout<<n<<" ";}
        if(j==10){cout<<endl;j=0;}        //？？？
    }
    return 0;
}
