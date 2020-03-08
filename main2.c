//
//  main.c
//  stop_and_go_gen
//
//  Created by Shaad Fazal on 04/03/20.
//  Copyright © 2020 Shaad Fazal. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a[5],b,n,k,l[5],m[5],z,c,y,x,s=0;
    printf("Enter the sequence for LFSR 1");
    for(n=0;n<4;n++)
    {
        scanf("%d",&a[n]);
    }
    printf("Enter the sequence for LFSR 2");
    for(n=0;n<4;n++)
    {
        scanf("%d",&l[n]);
    }
    printf("Enter the sequence for LFSR Select");
    for(n=0;n<4;n++)
    {
        scanf("%d",&m[n]);
    }
    
    
    x=m[3];
    c=l[3];
    while(1)
    {
        
    
    {
        k=(a[0]^a[3]);
        if(k==1)
        {
            z=l[3];
            c=(l[0]^l[3]);
            for(b=2;b>=0;b--)
            {
                l[b+1]=l[b];
            }
            l[0]=c;

        }
        if(k==0)
        {
            y=m[3];
            x=(m[0]^m[3]);
            for(b=2;b>=0;b--)
            {
                m[b+1]=m[b];
            }
            m[0]=x;
            
        }
        printf("%d",(c^x));
        for(b=2;b>=0;b--)
        {
            a[b+1]=a[b];
        }
        a[0]=k;
        s++;
        if(s==34)
        {
            break;
        }
    }
        }
        return 0;
}
