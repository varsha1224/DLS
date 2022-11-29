#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ODI.h"
#include "T20.h"


//Team 1 - the team batting first
//Team 2 - the team batting second

typedef struct
{
    int scoreT1;
    int scoreT2;
    int oversT1;
    int oversDoneT2;
    int oversLeftT2;
    int wicketsT1;
    int wicketsT2;
    double tApprox;
    int target;
}scoringCredentials;

//For ODI
int ODI_Team2_inningsCutShort(scoringCredentials s) //The second team cannot resume their play after the rain and the match is abandoned
{
    float perAfterResumption=0.0,perT2BeforeRain=0.0;       //Resource percentage of team 2 after and before rain

    perT2BeforeRain=readingFile_Scoring(s.oversLeftT2, s.wicketsT2);
    perAfterResumption=100.0-perT2BeforeRain;
    s.tApprox=(s.scoreT1*perAfterResumption)/100.0;
    s.target=ceil(s.tApprox);
    return s.target;
}

int ODI_Team2_inningsInterrupted(scoringCredentials s) //The second team resumes play after the rain (has a small halt in their play)
{
    float resourceBeforeT2=0.0,resourceAfterT2=0.0; //The resources of team 2 before and after the rain, it will differ due to changes in the number of overs
    float resourceT2=0.0; //The final resources of team 2 before they resume playing

    resourceBeforeT2=readingFile_Scoring(50-s.oversDoneT2, s.wicketsT2);
    resourceAfterT2=readingFile_Scoring(s.oversLeftT2, s.wicketsT2);
    resourceT2=100.0-resourceBeforeT2+resourceAfterT2;
    s.tApprox=(s.scoreT1*resourceT2)/100;
    s.target=ceil(s.tApprox);
    return s.target;
}

int ODI_Team2_inningsDelay(scoringCredentials s) //The second team has a delayed start to their innings (does not have full 50 overs to play)
{
    float resourceBefore=0.0,resourceTeam2=0.0;    //The resource percentage of team 2 during the rain interruption and after the rain i.e., when the start to play

    resourceBefore=readingFile_Scoring(50-s.oversLeftT2,0);
    resourceTeam2=100.0-resourceBefore;
    s.tApprox=(s.scoreT1*resourceTeam2)/100;
    s.target=ceil(s.tApprox);
    return s.target;
}

int ODI_Team1_inningsCutShort(scoringCredentials s) //The first team did not complete their 50 overs
{
    int Avg=245; //Avg is the average score expected from the team batting first in international cricket
    float perAfterResumption=0.0,perT1BeforeRain=0.0;
    float resourceT2=0.0;

    resourceT2=readingFile_Scoring(s.oversT1, 0);
    perT1BeforeRain=readingFile_Scoring(50-s.oversT1, s.wicketsT1);
    perAfterResumption=100.0-perT1BeforeRain;
    s.tApprox=((resourceT2-perAfterResumption)/100*Avg)+s.scoreT1;
    s.target=ceil(s.tApprox);
    return s.target;

}

void printTableODI()    //The table with the resource percentage
{
    FILE * fp;
    char ch;
    fp=fopen("C:\\Users\\91978\\Desktop\\SEM - 1\\ODI FILE.txt","r");
    if (fp==NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }
    else
    {
        while (!(feof(fp)))
        {
            ch=fgetc(fp);
            printf("%c",ch);
        }
        fclose(fp);
    }
}

void ODIcase1()
{
            scoringCredentials s1;
            int result,diffRuns,diffWickets;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s1.scoreT1);
            if (s1.scoreT1<0)
            {
                printf("Enter valid score\n");
                ODIcase1();
            }
            printf("\n");
            printf("Enter the score of team 2 before rain : ");
            scanf("%d",&s1.scoreT2);
            if (s1.scoreT2<0)
            {
                printf("Enter valid score\n");
                ODIcase1();
            }
            printf("\n");
            printf("How many overs does team 2 have : ");
            scanf("%d",&s1.oversLeftT2);
            if (s1.oversLeftT2<0)
            {
                printf("Enter valid input\n");
                ODIcase1();
            }
            printf("\n");
            printf("How many wickets did team 2 lose? : ");
            scanf("%d",&s1.wicketsT2);
            if (s1.wicketsT2<0)
            {
                printf("Enter valid input\n");
                ODIcase1();
            }
            printf("\n");
            result=ODI_Team2_inningsCutShort(s1);
            diffWickets=10-s1.wicketsT2;
            diffRuns=result-s1.scoreT2;
            if (s1.scoreT2>result)
            {
                printf("Team 2 won by %d wickets\n",diffWickets);
                printf("\n");
            }
            else if (s1.scoreT2<result)
            {
                printf("Team 1 won by %d runs\n",diffRuns);
                printf("\n");
            }
            else
            {
                printf("Match Tied\n");
                printf("\n");
            }
            exit(0);
}

void ODIcase2()
{
            scoringCredentials s2;
            int result;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s2.scoreT1);
            if (s2.scoreT1<0)
            {
                printf("Enter valid score\n");
                ODIcase2();
            }
            printf("\n");
            printf("Enter the score of team 2 before rain interruptions : ");
            scanf("%d",&s2.scoreT2);
            if (s2.scoreT2<0)
            {
                printf("Enter valid score\n");
                ODIcase2();
            }
            printf("\n");
            printf("How many overs did team 2 play before the rain interruptions? : ");
            scanf("%d",&s2.oversDoneT2);
            if (s2.oversDoneT2<0)
            {
                printf("Enter valid input\n");
                ODIcase2();
            }
            printf("\n");
            printf("How many overs are left to play for team 2 after rain? : ");
            scanf("%d",&s2.oversLeftT2);
            if (s2.oversLeftT2<0)
            {
                printf("Enter valid input\n");
                ODIcase2();
            }
            printf("\n");
            printf("How many wickets did team 2 lose? : ");
            scanf("%d",&s2.wicketsT2);
            if (s2.wicketsT2<0)
            {
                printf("Enter valid input\n");
                ODIcase2();
            }
            printf("\n");
            result=ODI_Team2_inningsInterrupted(s2);
            printf("Target for team 2 : %d runs\n",result);
            printf("\n");
            printf("Team 2 has to score %d runs in %d overs to win\n",result-s2.scoreT2,s2.oversLeftT2);
            printf("\n");
            exit(0);
}

void ODIcase3()
{
            scoringCredentials s3;
            int result;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s3.scoreT1);
            if (s3.scoreT1<0)
            {
                printf("Enter valid score\n");
                ODIcase3();
            }
            printf("\n");
            printf("How many overs does team 2 have? : ");
            scanf("%d",&s3.oversLeftT2);
            if (s3.oversLeftT2<0)
            {
                printf("Enter valid input\n");
                ODIcase3();
            }
            printf("\n");
            result=ODI_Team2_inningsDelay(s3);
            printf("Team 2 has to score %d runs in %d overs\n",result,s3.oversLeftT2);
            printf("\n");
            exit(0);
}

void ODIcase4()
{
            scoringCredentials s4;
            int result;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s4.scoreT1);
            if (s4.scoreT1<0)
            {
                printf("Enter valid score\n");
                ODIcase4();
            }
            printf("\n");
            printf("How many overs did team 1 play? : ");
            scanf("%d",&s4.oversT1);
            if (s4.oversT1<0)
            {
                printf("Enter valid input\n");
                ODIcase4();
            }
            printf("\n");
            printf("How many wickets did team 1 lose? : ");
            scanf("%d",&s4.wicketsT1);
            if (s4.wicketsT1<0)
            {
                printf("Enter valid input\n");
                ODIcase4();
            }
            printf("\n");
            result=ODI_Team1_inningsCutShort(s4);
            printf("Team 2 has to score %d runs in %d overs to win\n",result,s4.oversT1);
            printf("\n");
            exit(0);
}
//For 20 overs
int T20_Team2_inningsCutShort(scoringCredentials s) //The second team cannot resume their play after the rain and the match is abandoned
{
    float perAfterResumption=0.0,perT2BeforeRain=0.0;   //Resource percentage of team 2 after and before rain

    perT2BeforeRain=scoring_t20(s.oversLeftT2, s.wicketsT2);
    perAfterResumption=100-perT2BeforeRain;
    s.tApprox=(s.scoreT1*perAfterResumption)/100;
    s.target=ceil(s.tApprox);
    return s.target;
}

int T20_Team2_inningsInterrupted(scoringCredentials s) //The second team resumes play after the rain (has a small halt in their play
{
    float resourceBeforeT2=0.0,resourceAfterT2=0.0; //The resources of team 2 before and after the rain, it will differ due to changes in the number of overs
    float resourceT2=0.0; //The final resources of team 2 before they resume playing

    resourceBeforeT2=scoring_t20(20-s.oversDoneT2, s.wicketsT2);
    resourceAfterT2=scoring_t20(s.oversLeftT2, s.wicketsT2);
    resourceT2=100.0-resourceBeforeT2+resourceAfterT2;
    s.tApprox=(s.scoreT1*resourceT2)/100;
    s.target=ceil(s.tApprox);
    return s.target;
}

int T20_Team2_inningsDelayed(scoringCredentials s)    //The second team has a delayed start to their innings (does not have full 20 overs to play)
{
    float resourceBefore=0.0,resourceTeam2=0.0;        //The resource percentage of team 2 during the rain interruption and after the rain i.e., when the start to play

    resourceBefore=scoring_t20(20-s.oversLeftT2, 0);
    resourceTeam2=100.0-resourceBefore;
    s.tApprox=(s.scoreT1*resourceTeam2)/100;
    s.target=ceil(s.tApprox);
    return s.target;
}

int T20_Team1_inningsCutShort(scoringCredentials s) //The first team did not complete their 20 overs
{
    int Avg=145; //Avg is the average score expected from the team batting first in international cricket
    float perAfterResumption=0.0,perT1BeforeRain=0.0;
    float resourceT2=0.0;

    resourceT2=scoring_t20(s.oversT1, 0);
    perT1BeforeRain=scoring_t20(20-s.oversT1, s.wicketsT1);
    perAfterResumption=100.0-perT1BeforeRain;
    s.tApprox=((resourceT2-perAfterResumption)/100*Avg)+s.scoreT1;
    s.target=ceil(s.tApprox);
    return s.target;

}


void printTableT20()
{
    FILE * fp;
    char ch;
    fp=fopen("C:\\Users\\91978\\Desktop\\SEM - 1\\T20 FILE.txt","r");
    if (fp==NULL)
    {
        printf("File does not exist\n");
        exit(1);
    }
    else
    {
        while (!(feof(fp)))
        {
            ch=fgetc(fp);
            printf("%c",ch);
        }
        fclose(fp);
    }
}

void T20case1()
{
            scoringCredentials s1;
            int result,diffRuns,diffWickets;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s1.scoreT1);
            if (s1.scoreT1<0)
            {
                printf("Enter valid score\n");
                T20case1();
            }
            printf("\n");
            printf("Enter the score of team 2 before rain : ");
            scanf("%d",&s1.scoreT2);
            if (s1.scoreT2<0)
            {
                printf("Enter valid score\n");
                T20case1();
            }
            printf("\n");
            printf("Enter the overs does team 2 have : ");
            scanf("%d",&s1.oversLeftT2);
            if (s1.oversLeftT2<0)
            {
                printf("Enter valid option\n");
                T20case1();
            }
            printf("\n");
            printf("How many wickets did team 2 lose? : ");
            scanf("%d",&s1.wicketsT2);
            if (s1.wicketsT2<0)
            {
                printf("Enter valid score\n");
                T20case1();
            }
            printf("\n");
            result=T20_Team2_inningsCutShort(s1);
            diffWickets=10-s1.wicketsT2;
            diffRuns=result-s1.scoreT2;
            if (s1.scoreT2>result)
            {
                printf("Team 2 won by %d wickets\n",diffWickets);
                printf("\n");
            }
            else if (s1.scoreT2<result)
            {
                printf("Team 1 won by %d runs\n",diffRuns);
                printf("\n");
            }
            else
            {
                printf("Match Tied\n");
                printf("\n");
            }
            exit(0);
}

void T20case2()
{
            scoringCredentials s2;
            int result;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s2.scoreT1);
            if (s2.scoreT1<0)
            {
                printf("Enter valid score\n");
                T20case2();
            }
            printf("\n");
            printf("Enter the score of team 2 before rain interruptions : ");
            scanf("%d",&s2.scoreT2);
            if (s2.scoreT2<0)
            {
                printf("Enter valid score\n");
                T20case2();
            }
            printf("\n");
            printf("How many overs did team 2 play before the rain interruptions? : ");
            scanf("%d",&s2.oversDoneT2);
            if (s2.oversDoneT2<0)
            {
                printf("Enter valid option\n");
                T20case2();
            }
            printf("\n");
            printf("How many overs are left to play for team 2 after rain? : ");
            scanf("%d",&s2.oversLeftT2);
            if (s2.oversLeftT2<0)
            {
                printf("Enter valid option\n");
                T20case2();
            }
            printf("\n");
            printf("How many wickets did team 2 lose? : ");
            scanf("%d",&s2.wicketsT2);
            if (s2.wicketsT2<0)
            {
                printf("Enter valid option\n");
                T20case2();
            }
            printf("\n");
            result=T20_Team2_inningsInterrupted(s2);
            printf("Target for team 2 : %d runs\n",result);
            printf("\n");
            printf("Team 2 has to score %d runs in %d overs to win\n",result-s2.scoreT2,s2.oversLeftT2);
            printf("\n");
            exit(0);
}

void T20case3()
{
            scoringCredentials s3;
            int result;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s3.scoreT1);
            if (s3.scoreT1<0)
            {
                printf("Enter valid option\n");
                T20case3();
            }
            printf("\n");
            printf("How many overs does team 2 have? : ");
            scanf("%d",&s3.oversLeftT2);
            if (s3.oversLeftT2<0)
            {
                printf("Enter valid option\n");
                T20case3();
            }
            printf("\n");
            result=T20_Team2_inningsDelayed(s3);
            printf("Team 2 has to score %d runs in %d overs\n",result,s3.oversLeftT2);
            printf("\n");
            exit(0);
}
void T20case4()
{
            scoringCredentials s4;
            int result;
            printf("Enter the score of team 1 : ");
            scanf("%d",&s4.scoreT1);
            if (s4.scoreT1<0)
            {
                printf("Enter valid score\n");
                T20case4();
            }
            printf("\n");
            printf("How many overs did team 1 play? : ");
            scanf("%d",&s4.oversT1);
            if (s4.oversT1<0)
            {
                printf("Enter valid option\n");
                T20case4();
            }
            printf("\n");
            printf("How many wickets did team 1 lose? : ");
            scanf("%d",&s4.wicketsT1);
            if (s4.wicketsT1<0)
            {
                printf("Enter valid option\n");
                T20case4();
            }
            printf("\n");
            result=T20_Team1_inningsCutShort(s4);
            printf("Team 2 has to score %d runs in %d overs to win\n",result,s4.oversT1);
            printf("\n");
            exit(0);
}


int main()
{
    system("color 0F");
    int opt,n;
    printf("\n");
    printf("\t\t\t**************************************************************\n");
    printf("\t\t\t\t\tDUCKWORTH-LEWIS-STERN METHOD\n");
    printf("\t\t\t**************************************************************\n");
    printf("\n");
    printf("Select from the following menu to find the target score or the winner when no play is possible :\n");
    printf("\n");
    printf("1. Team 1 completed and Team 2's innings stopped and match is abandoned - Finding the winner\n");
    printf("\n");
    printf("2. Team 1 completed and Team 2's innings interrupted\n");
    printf("\n");
    printf("3. Team 1 completed and Team 2's innings delayed\n");
    printf("\n");
    printf("4. Team 1's innings cut shorted\n");
    printf("\n");
    printf("5. To see on what basis the target score is calculated\n");
    printf("\n");
    printf("Enter your option : ");
    scanf("%d",&n);
    if (n!=1 && n!=2 && n!=3 && n!=4 && n!=5)
    {
        printf("Enter valid choice\n");
        exit(0);
    }
    printf("Press 1 for ODI and 2 for T20\n");
    scanf("%d",&opt);
    printf("\n");
    system("cls");
    if (opt==1)
    {
        if (n==1)
        {
            ODIcase1();
        }

        else if (n==2)
        {
            ODIcase2();
        }

        else if (n==3)
        {
            ODIcase3();
        }

        else if (n==4)
        {
            ODIcase4();
        }

        else if (n==5)
        {
            printf("\n");
            printf("The target scores are calculated on the basis of the resource percentage which is calculated from the number of overs left and the wickets in hand\n");
            printf("\n");
            printTableODI();
        }

        else
        {
            printf("Enter valid choice \n");
        }
    }

    else if(opt==2)
    {
        if (n==1)
        {
            T20case1();
        }

        else if (n==2)
        {
            T20case2();
        }

        else if (n==3)
        {
            T20case3();
        }

        else if (n==4)
        {
            T20case4();

        }
        else if (n==5)
        {
            printf("\n");
            printf("The target scores are calculated on the basis of the resource percentage which is calculated from the number of overs left and the wickets in hand\n");
            printf("\n");
            printTableT20();
        }
    }
    else
    {
        printf("Enter valid choice\n");
        exit(0);
    }
}
