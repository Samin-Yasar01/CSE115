#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct PlayerList
    {
    char Name[1000];
    int Year,HighestScore,Wickets;
    };
int main()
{
    struct PlayerList players[1000];
    int n,i=0;
    FILE *plinfo=fopen("players.txt","r");
    while(!feof(plinfo))
    {
        fscanf(plinfo,"%[^\n]",&players[i].Name);
        fscanf(plinfo,"%d %d %d",&players[i].Year,&players[i].HighestScore,&players[i].Wickets);
        i++;
    }
    int temp=1;
    while(temp)
    {
            temp=0;
        for (int j=0;j<i-1 ;j++ )
        {
            if(players[j].HighestScore<players[j+1].HighestScore)
            {
                temp=1;
                struct PlayerList temp1=players[j];
                players[j]=players[j+1];
                players[j+1]=temp1;
            }
        }
    }
    for (int j=0;j<5 ;j++ )
    {
        printf("%s %d %d %d\n",players[j].Name,players[j].Year,players[j].HighestScore,players[j].Wickets);
    }
    return 0;
}
