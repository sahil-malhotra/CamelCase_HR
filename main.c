//
//  main.c
//  CamelCase_HR
//
//  Created by Sahil Malhotra on 15/08/16.
//  Copyright © 2016 Sahil Malhotra. All rights reserved.
//

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    char* s = (char *)malloc(10240 * sizeof(char));

    long long count = 0;
    long long n;
    scanf("%s", s);
    
    n = strlen(s);
    for(long long i = 0; i < n; i++)
    {
        if(isupper(s[i]))
        {
            count++;
        }
        
    }
    
    printf("%lld\n", count+1);
    free(s);
    
    return 0;
}

