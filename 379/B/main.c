#include <stdio.h>

int main()
{
    int two,three,five,six;
    while(scanf("%d %d %d %d",&two,&three,&five,&six)!=EOF){
        
        int sum=0;
        while(two>0 && five>0 && six>0){
            
           two--;
           five--;
           six--;
           sum+=256;
           
        }
        while(three>0 && two>0){
            two--;
            three--;
            sum+=32;
        }
        
        printf("%d\n",sum);
    }
    return 0;
}