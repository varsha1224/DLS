#include <stdio.h>

//For 20 overs

float scoring_t20(int OversleftTt2, int wicketsLost)
{
    float resource=0.0;
    if(OversleftTt2==20)
    {
        switch(wicketsLost)
        {
            case 0:resource=100.00;break;
            case 1:resource=96.8;break;
            case 2:resource=92.6;break;
            case 3:resource=86.7;break;
            case 4:resource=78.8;break;
            case 5:resource=68.2;break;
            case 6:resource=54.4;break;
            case 7:resource=37.5;break;
            case 8:resource=21.3;break;
            case 9:resource=8.3;break;
        }
    }
    else if (OversleftTt2==19)
    {
        switch (wicketsLost)
        {
            case 0: resource=96.1;break;
            case 1: resource=93.3;break;
            case 2: resource=89.2;break;
            case 3: resource=83.9;break;
            case 4: resource=76.7;break;
            case 5: resource=66.6;break;
            case 6: resource=53.5;break;
            case 7: resource=37.3;break;
            case 8: resource=21.0;break;
            case 9: resource=8.3;break;
        }
    }
     else if (OversleftTt2==18)
    {
        switch (wicketsLost)
        {
            case 0: resource=92.2;break;
            case 1: resource=89.6;break;
            case 2: resource=85.9;break;
            case 3: resource=81.1;break;
            case 4: resource=74.2;break;
            case 5: resource=65.0;break;
            case 6: resource=52.7;break;
            case 7: resource=36.9;break;
            case 8: resource=21.0;break;
            case 9: resource=8.3;break;

        }
    }
     else if (OversleftTt2==17)
    {
        switch (wicketsLost)
        {
            case 0: resource=88.2;break;
            case 1: resource=85.7;break;
            case 2: resource=82.5;break;
            case 3: resource=77.9;break;
            case 4: resource=71.7;break;
            case 5: resource=63.3;break;
            case 6: resource=51.6;break;
            case 7: resource=36.6;break;
            case 8: resource=21.0;break;
            case 9: resource=8.3;break;

        }
    }
     else if (OversleftTt2==16)
    {
        switch (wicketsLost)
        {
            case 0:resource=84.1;break;
            case 1:resource=81.8;break;
            case 2:resource=79.0;break;
            case 3:resource=74.4;break;
            case 4:resource=69.1;break;
            case 5:resource=61.3;break;
            case 6:resource=50.4;break;
            case 7:resource=36.2;break;
            case 8:resource=20.8;break;
            case 9:resource=8.3;break;

        }
    }
     else if (OversleftTt2==15)
    {
        switch (wicketsLost)
        {
            case 0:resource=79.9;break;
            case 1:resource=77.9;break;
            case 2:resource=75.3;break;
            case 3:resource=71.6;break;
            case 4:resource=66.4;break;
            case 5:resource=59.2;break;
            case 6:resource=49.1;break;
            case 7:resource=35.7;break;
            case 8:resource=20.8;break;
            case 9:resource=8.3;break;

        }
    }
     else if (OversleftTt2==14)
    {
        switch (wicketsLost)
        {
            case 0:resource=75.4;break;
            case 1:resource=73.7;break;
            case 2:resource=71.4;break;
            case 3:resource=68.0;break;
            case 4:resource=63.4;break;
            case 5:resource=56.9;break;
            case 6:resource=47.7;break;
            case 7:resource=35.2;break;
            case 8:resource=20.8;break;
            case 9:resource=8.3;break;

        }
    }
     else if (OversleftTt2==13)
    {
        switch (wicketsLost)
        {
            case 0:resource=71.0;break;
            case 1:resource=69.4;break;
            case 2:resource=67.3;break;
            case 3:resource=64.5;break;
            case 4:resource=60.4;break;
            case 5:resource=54.4;break;
            case 6:resource=46.1;break;
            case 7:resource=34.5;break;
            case 8:resource=20.7;break;
            case 9:resource=8.3;break;

        }
    }
     else if (OversleftTt2==12)
    {
        switch (wicketsLost)
        {
            case 0:resource=66.4;break;
            case 1:resource=65.0;break;
            case 2:resource=63.3;break;
            case 3:resource=60.6;break;
            case 4:resource=57.1;break;
            case 5:resource=51.9;break;
            case 6:resource=44.3;break;
            case 7:resource=33.6;break;
            case 8:resource=20.5;break;
            case 9:resource=8.3;break;

        }
    }
     else if (OversleftTt2==11)
    {
        switch (wicketsLost)
        {
            case 0:resource=61.7;break;
            case 1:resource=60.4;break;
            case 2:resource=59.0;break;
            case 3:resource=56.7;break;
            case 4:resource=53.7;break;
            case 5:resource=49.1;break;
            case 6:resource=42.4;break;
            case 7:resource=32.7;break;
            case 8:resource=20.3;break;
            case 9:resource=8.3;break;


        }
    }
     else if (OversleftTt2==10)
    {
        switch (wicketsLost)
        {
            case 0:resource=56.7;break;
            case 1:resource=55.8;break;
            case 2:resource=54.4;break;
            case 3:resource=52.7;break;
            case 4:resource=50.0;break;
            case 5:resource=46.1;break;
            case 6:resource=40.3;break;
            case 7:resource=31.6;break;
            case 8:resource=20.1;break;
            case 9:resource=8.3;break;

        }
    }
     else if (OversleftTt2==9)
    {
        switch (wicketsLost)
        {
            case 0:resource=51.8;break;
            case 1:resource=51.1;break;
            case 2:resource=49.8;break;
            case 3:resource=48.4;break;
            case 4:resource=46.1;break;
            case 5:resource=42.8;break;
            case 6:resource=37.8;break;
            case 7:resource=30.2;break;
            case 8:resource=19.8;break;
            case 9:resource=8.3;break;

        }
    }
    else if (OversleftTt2==8)
    {
        switch (wicketsLost)
        {
            case 0:resource=46.6;break;
            case 1:resource=45.9;break;
            case 2:resource=45.1;break;
            case 3:resource=43.8;break;
            case 4:resource=42.0;break;
            case 5:resource=39.4;break;
            case 6:resource=31.6;break;
            case 7:resource=28.6;break;
            case 8:resource=19.3;break;
            case 9:resource=8.3;break;

        }
    }
     else if (OversleftTt2==7)
    {
        switch (wicketsLost)
        {
            case 0:resource=41.3;break;
            case 1:resource=40.8;break;
            case 2:resource=40.1;break;
            case 3:resource=39.2;break;
            case 4:resource=37.8;break;
            case 5:resource=35.5;break;
            case 6:resource=32.2;break;
            case 7:resource=26.9;break;
            case 8:resource=18.6;break;
            case 9:resource=8.3;break;

        }
    }
      else if (OversleftTt2==6)
    {
        switch (wicketsLost)
        {
            case 0:resource=35.9;break;
            case 1:resource=35.5;break;
            case 2:resource=35.0;break;
            case 3:resource=34.3;break;
            case 4:resource=33.2;break;
            case 5:resource=31.4;break;
            case 6:resource=29.0;break;
            case 7:resource=24.6;break;
            case 8:resource=17.8;break;
            case 9:resource=8.1;break;

        }
    }
      else if (OversleftTt2==5)
    {
        switch (wicketsLost)
        {
            case 0:resource=30.4;break;
            case 1:resource=30.0;break;
            case 2:resource=29.7;break;
            case 3:resource=29.2;break;
            case 4:resource=28.4;break;
            case 5:resource=27.2;break;
            case 6:resource=25.3;break;
            case 7:resource=22.1;break;
            case 8:resource=16.6;break;
            case 9:resource=8.1;break;

        }
    }
      else if (OversleftTt2==4)
    {
        switch (wicketsLost)
        {
            case 0:resource=24.6;break;
            case 1:resource=24.4;break;
            case 2:resource=24.2;break;
            case 3:resource=23.9;break;
            case 4:resource=23.3;break;
            case 5:resource=22.4;break;
            case 6:resource=21.2;break;
            case 7:resource=18.9;break;
            case 8:resource=14.8;break;
            case 9:resource=8.0;break;

        }
    }
      else if (OversleftTt2==3)
    {
        switch (wicketsLost)
        {
            case 0:resource=18.7;break;
            case 1:resource=18.6;break;
            case 2:resource=18.4;break;
            case 3:resource=18.2;break;
            case 4:resource=18.0;break;
            case 5:resource=17.5;break;
            case 6:resource=16.8;break;
            case 7:resource=15.4;break;
            case 8:resource=12.7;break;
            case 9:resource=7.4;break;

        }
    }
      else if (OversleftTt2==2)
    {
        switch (wicketsLost)
        {
            case 0:resource=12.7;break;
            case 1:resource=12.5;break;
            case 2:resource=12.5;break;
            case 3:resource=12.4;break;
            case 4:resource=12.4;break;
            case 5:resource=12.0;break;
            case 6:resource=11.7;break;
            case 7:resource=11;break;
            case 8:resource=9.7;break;
            case 9:resource=6.5;break;

        }
    }
      else if (OversleftTt2==1)
    {
        switch (wicketsLost)
        {
            case 0:resource=6.4;break;
            case 1:resource=6.4;break;
            case 2:resource=6.4;break;
            case 3:resource=6.4;break;
            case 4:resource=6.4;break;
            case 5:resource=6.2;break;
            case 6:resource=6.2;break;
            case 7:resource=6.0;break;
            case 8:resource=5.7;break;
            case 9:resource=4.4;break;

        }
    }

    else if (OversleftTt2==0)
    {
        switch (wicketsLost)
        {
            case 0:resource=0.0;break;
            case 1:resource=0.0;break;
            case 2:resource=0.0;break;
            case 3:resource=0.0;break;
            case 4:resource=0.0;break;
            case 5:resource=0.0;break;
            case 6:resource=0.0;break;
            case 7:resource=0.0;break;
            case 8:resource=0.0;break;
            case 9:resource=0.0;break;

        }
    }

    return resource;

}
