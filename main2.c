//
//  main.c
//  stop_and_go_gen
//
//  Created by Shaad Fazal on 04/03/20.
//  Copyright © 2020 Shaad Fazal. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a[5],b,n,k,l[5],m[5],z,c,y,x,s=0; //Initialization of arrays and variables used
    printf("Enter the sequence for LFSR 1");
    for(n=0;n<4;n++)
    {
        scanf("%d",&a[n]);                  //User entered lfsr1
    }
    printf("Enter the sequence for LFSR 2");
    for(n=0;n<4;n++)
    {
        scanf("%d",&l[n]);                  //User entered lfsr2
    }
    printf("Enter the sequence for LFSR 3");
    for(n=0;n<4;n++)
    {
        scanf("%d",&m[n]);            //User entered lfsr3       
    }
    
    
    x=m[3];
    c=l[3];                 //Assignment before iteration to be used at the first clock
    while(1)
    {
        
    
    {
        k=(a[0]^a[3]);         
        if(k==1)            //Decision to select LFSR2
        {
            z=l[3];
            c=(l[0]^l[3]);
            for(b=2;b>=0;b--)
            {
                l[b+1]=l[b];       //LFSR2 bit rearrangement
            }
            l[0]=c;

        }
        if(k==0)            //Decision to select LFSR3
        {
            y=m[3];
            x=(m[0]^m[3]);
            for(b=2;b>=0;b--)
            {
                m[b+1]=m[b];        //LFSR3 bit rearrangement
            }
            m[0]=x;
            
        }
        printf("%d",(c^x));     //XOR of outpit bits
        for(b=2;b>=0;b--)
        {
            a[b+1]=a[b];        // //LFSR1 bit rearrangement
        }
        a[0]=k;
        s++;
        if(s==34)
        {
            break;  //while(1) is exited when we get the first 34 bits of our sequence
        }
    }
        }
        return 0;
}
