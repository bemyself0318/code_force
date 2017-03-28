#include <stdio.h>

int main()
{
    int games;
    while(scanf("%d",&games)!=EOF){
        
        int Anton=0,Danik=0;
        char tmp;
        
        getchar();
        for(int i=0;i<games;i++){
            
            scanf("%c",&tmp);
            if(tmp=='A')
                Anton++;
            else
                Danik++;
        }
        getchar();
        if(Anton>Danik)printf("Anton\n");
        else if(Anton<Danik)printf("Danik\n");
        else printf("Friendship\n");
        
    }
    return 0;
}