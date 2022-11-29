#include<stdio.h>

float readingFile_Scoring(int OversLeft,int wicketsLost)
{
        float resource=0.0;
        if (OversLeft==50)
        {
            switch(wicketsLost)
            {
                case 0: resource=100.0;
                        break;
                case 1: resource=93.4;
                        break;
                case 2: resource=85.1;
                        break;
                case 3: resource=74.9;
                        break;
                case 4: resource=62.7;
                        break;
                case 5: resource=49.8;
                        break;
                case 6: resource=34.9;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
        else if (OversLeft==49)
        {
            switch(wicketsLost)
            {
                case 0: resource=99.1;
                        break;
                case 1: resource=92.6;
                        break;
                case 2: resource=84.5;
                        break;
                case 3: resource=74.4;
                        break;
                case 4: resource=62.5;
                        break;
                case 5: resource=48.9;
                        break;
                case 6: resource=34.9;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }

        }
        else if (OversLeft==48)
        {
            switch(wicketsLost)
            {
                case 0: resource=98.1;
                        break;
                case 1: resource=91.7;
                        break;
                case 2: resource=83.8;
                        break;
                case 3: resource=74.0;
                        break;
                case 4: resource=62.2;
                        break;
                case 5: resource=48.8;
                        break;
                case 6: resource=34.9;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==47)
        {
            switch(wicketsLost)
            {
                case 0: resource=97.1;
                        break;
                case 1: resource=90.9;
                        break;
                case 2: resource=83.2;
                        break;
                case 3: resource=73.5;
                        break;
                case 4: resource=61.9;
                        break;
                case 5: resource=48.6;
                        break;
                case 6: resource=34.9;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==46)
        {
            switch(wicketsLost)
            {
                case 0: resource=96.1;
                        break;
                case 1: resource=90.0;
                        break;
                case 2: resource=82.5;
                        break;
                case 3: resource=73.0;
                        break;
                case 4: resource=61.6;
                        break;
                case 5: resource=48.5;
                        break;
                case 6: resource=34.8;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==45)
        {
            switch(wicketsLost)
            {
                case 0: resource=95.0;
                        break;
                case 1: resource=89.1;
                        break;
                case 2: resource=81.8;
                        break;
                case 3: resource=72.5;
                        break;
                case 4: resource=61.3;
                        break;
                case 5: resource=48.4;
                        break;
                case 6: resource=34.8;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==44)
        {
            switch(wicketsLost)
            {
                case 0: resource=93.9;
                        break;
                case 1: resource=88.2;
                        break;
                case 2: resource=81.0;
                        break;
                case 3: resource=72.0;
                        break;
                case 4: resource=61.0;
                        break;
                case 5: resource=48.3;
                        break;
                case 6: resource=34.8;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==43)
        {
            switch(wicketsLost)
            {
                case 0: resource=92.8;
                        break;
                case 1: resource=87.3;
                        break;
                case 2: resource=80.3;
                        break;
                case 3: resource=71.4;
                        break;
                case 4: resource=60.7;
                        break;
                case 5: resource=48.1;
                        break;
                case 6: resource=34.7;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==42)
        {
            switch(wicketsLost)
            {
                case 0: resource=91.7;
                        break;
                case 1: resource=86.3;
                        break;
                case 2: resource=79.5;
                        break;
                case 3: resource=70.9;
                        break;
                case 4: resource=60.3;
                        break;
                case 5: resource=47.9;
                        break;
                case 6: resource=34.7;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==41)
        {
            switch(wicketsLost)
            {
                case 0: resource=90.5;
                        break;
                case 1: resource=85.3;
                        break;
                case 2: resource=78.7;
                        break;
                case 3: resource=70.3;
                        break;
                case 4: resource=59.9;
                        break;
                case 5: resource=47.8;
                        break;
                case 6: resource=34.6;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==40)
        {
            switch(wicketsLost)
            {
                case 0: resource=89.3;
                        break;
                case 1: resource=84.2;
                        break;
                case 2: resource=77.8;
                        break;
                case 3: resource=69.6;
                        break;
                case 4: resource=59.5;
                        break;
                case 5: resource=47.6;
                        break;
                case 6: resource=34.6;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==39)
        {
            switch(wicketsLost)
            {
                case 0: resource=88.0;
                        break;
                case 1: resource=83.1;
                        break;
                case 2: resource=76.9;
                        break;
                case 3: resource=69.0;
                        break;
                case 4: resource=59.1;
                        break;
                case 5: resource=47.4;
                        break;
                case 6: resource=34.5;
                        break;
                case 7: resource=22.0;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==38)
        {
            switch(wicketsLost)
            {
                case 0: resource=86.7;
                        break;
                case 1: resource=82.0;
                        break;
                case 2: resource=76.0;
                        break;
                case 3: resource=68.3;
                        break;
                case 4: resource=58.7;
                        break;
                case 5: resource=47.1;
                        break;
                case 6: resource=34.5;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==37)
        {
            switch(wicketsLost)
            {
                case 0: resource=85.4;
                        break;
                case 1: resource=80.9;
                        break;
                case 2: resource=75.0;
                        break;
                case 3: resource=67.6;
                        break;
                case 4: resource=58.2;
                        break;
                case 5: resource=46.9;
                        break;
                case 6: resource=34.4;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==36)
        {
            switch(wicketsLost)
            {
                case 0: resource=84.1;
                        break;
                case 1: resource=79.7;
                        break;
                case 2: resource=74.1;
                        break;
                case 3: resource=66.8;
                        break;
                case 4: resource=57.7;
                        break;
                case 5: resource=46.6;
                        break;
                case 6: resource=34.3;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==35)
        {
            switch(wicketsLost)
            {
                case 0: resource=82.7;
                        break;
                case 1: resource=78.5;
                        break;
                case 2: resource=73.0;
                        break;
                case 3: resource=66.0;
                        break;
                case 4: resource=57.2;
                        break;
                case 5: resource=46.4;
                        break;
                case 6: resource=34.2;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==34)
        {
            switch(wicketsLost)
            {
                case 0: resource=81.3;
                        break;
                case 1: resource=77.2;
                        break;
                case 2: resource=72.0;
                        break;
                case 3: resource=65.2;
                        break;
                case 4: resource=56.6;
                        break;
                case 5: resource=46.1;
                        break;
                case 6: resource=34.1;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==33)
        {
            switch(wicketsLost)
            {
                case 0: resource=79.8;
                        break;
                case 1: resource=75.9;
                        break;
                case 2: resource=70.9;
                        break;
                case 3: resource=64.4;
                        break;
                case 4: resource=56.0;
                        break;
                case 5: resource=45.8;
                        break;
                case 6: resource=34.0;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==32)
        {
            switch(wicketsLost)
            {
                case 0: resource=78.3;
                        break;
                case 1: resource=74.6;
                        break;
                case 2: resource=69.7;
                        break;
                case 3: resource=63.5;
                        break;
                case 4: resource=55.4;
                        break;
                case 5: resource=45.4;
                        break;
                case 6: resource=33.9;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==31)
        {
            switch(wicketsLost)
            {
                case 0: resource=76.7;
                        break;
                case 1: resource=73.2;
                        break;
                case 2: resource=68.6;
                        break;
                case 3: resource=62.5;
                        break;
                case 4: resource=54.8;
                        break;
                case 5: resource=45.1;
                        break;
                case 6: resource=33.7;
                        break;
                case 7: resource=21.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==30)
        {
            switch(wicketsLost)
            {
                case 0: resource=75.1;
                        break;
                case 1: resource=71.8;
                        break;
                case 2: resource=67.2;
                        break;
                case 3: resource=61.6;
                        break;
                case 4: resource=54.1;
                        break;
                case 5: resource=44.7;
                        break;
                case 6: resource=33.6;
                        break;
                case 7: resource=21.8;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
         else if (OversLeft==29)
        {
            switch(wicketsLost)
            {
                case 0: resource=73.5;
                        break;
                case 1: resource=70.3;
                        break;
                case 2: resource=66.1;
                        break;
                case 3: resource=60.5;
                        break;
                case 4: resource=53.4;
                        break;
                case 5: resource=44.2;
                        break;
                case 6: resource=33.4;
                        break;
                case 7: resource=21.8;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
        else if (OversLeft==28)
        {
            switch(wicketsLost)
            {
                case 0: resource=71.8;
                        break;
                case 1: resource=68.8;
                        break;
                case 2: resource=64.8;
                        break;
                case 3: resource=59.5;
                        break;
                case 4: resource=52.6;
                        break;
                case 5: resource=43.8;
                        break;
                case 6: resource=33.2;
                        break;
                case 7: resource=21.8;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
        else if (OversLeft==27)
        {
            switch(wicketsLost)
            {
                case 0: resource=70.1;
                        break;
                case 1: resource=67.2;
                        break;
                case 2: resource=63.4;
                        break;
                case 3: resource=58.4;
                        break;
                case 4: resource=51.8;
                        break;
                case 5: resource=43.3;
                        break;
                case 6: resource=33.0;
                        break;
                case 7: resource=21.7;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
        else if (OversLeft==26)
        {
            switch(wicketsLost)
            {
                case 0: resource=68.3;
                        break;
                case 1: resource=65.6;
                        break;
                case 2: resource=62.0;
                        break;
                case 3: resource=57.2;
                        break;
                case 4: resource=50.9;
                        break;
                case 5: resource=42.8;
                        break;
                case 6: resource=32.8;
                        break;
                case 7: resource=21.7;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
        else if (OversLeft==25)
        {
            switch(wicketsLost)
            {
                case 0: resource=66.5;
                        break;
                case 1: resource=63.9;
                        break;
                case 2: resource=60.5;
                        break;
                case 3: resource=56.0;
                        break;
                case 4: resource=50.0;
                        break;
                case 5: resource=42.2;
                        break;
                case 6: resource=32.6;
                        break;
                case 7: resource=21.6;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }
        else if (OversLeft==24)
        {
            switch(wicketsLost)
            {
                case 0: resource=64.6;
                        break;
                case 1: resource=62.2;
                        break;
                case 2: resource=59.0;
                        break;
                case 3: resource=54.7;
                        break;
                case 4: resource=49.0;
                        break;
                case 5: resource=41.6;
                        break;
                case 6: resource=32.3;
                        break;
                case 7: resource=21.6;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==23)
        {
            switch(wicketsLost)
            {
                case 0: resource=62.7;
                        break;
                case 1: resource=60.4;
                        break;
                case 2: resource=57.4;
                        break;
                case 3: resource=53.4;
                        break;
                case 4: resource=48.0;
                        break;
                case 5: resource=40.9;
                        break;
                case 6: resource=32.0;
                        break;
                case 7: resource=21.5;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==22)
        {
            switch(wicketsLost)
            {
                case 0: resource=60.7;
                        break;
                case 1: resource=58.6;
                        break;
                case 2: resource=55.8;
                        break;
                case 3: resource=52.0;
                        break;
                case 4: resource=47.0;
                        break;
                case 5: resource=40.2;
                        break;
                case 6: resource=31.6;
                        break;
                case 7: resource=21.4;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==21)
        {
            switch(wicketsLost)
            {
                case 0: resource=58.7;
                        break;
                case 1: resource=56.7;
                        break;
                case 2: resource=54.1;
                        break;
                case 3: resource=50.6;
                        break;
                case 4: resource=45.8;
                        break;
                case 5: resource=39.4;
                        break;
                case 6: resource=31.2;
                        break;
                case 7: resource=21.3;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==20)
        {
            switch(wicketsLost)
            {
                case 0: resource=56.6;
                        break;
                case 1: resource=54.8;
                        break;
                case 2: resource=52.4;
                        break;
                case 3: resource=49.1;
                        break;
                case 4: resource=44.6;
                        break;
                case 5: resource=38.6;
                        break;
                case 6: resource=30.8;
                        break;
                case 7: resource=21.2;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==19)
        {
            switch(wicketsLost)
            {
                case 0: resource=54.4;
                        break;
                case 1: resource=52.8;
                        break;
                case 2: resource=50.5;
                        break;
                case 3: resource=47.5;
                        break;
                case 4: resource=43.4;
                        break;
                case 5: resource=37.7;
                        break;
                case 6: resource=30.3;
                        break;
                case 7: resource=21.1;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==18)
        {
            switch(wicketsLost)
            {
                case 0: resource=52.2;
                        break;
                case 1: resource=50.7;
                        break;
                case 2: resource=48.6;
                        break;
                case 3: resource=45.9;
                        break;
                case 4: resource=42.0;
                        break;
                case 5: resource=36.8;
                        break;
                case 6: resource=29.8;
                        break;
                case 7: resource=20.9;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==17)
        {
            switch(wicketsLost)
            {
                case 0: resource=49.9;
                        break;
                case 1: resource=48.5;
                        break;
                case 2: resource=46.7;
                        break;
                case 3: resource=44.1;
                        break;
                case 4: resource=40.6;
                        break;
                case 5: resource=35.8;
                        break;
                case 6: resource=29.2;
                        break;
                case 7: resource=20.7;
                        break;
                case 8: resource=11.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==16)
        {
            switch(wicketsLost)
            {
                case 0: resource=47.6;
                        break;
                case 1: resource=46.3;
                        break;
                case 2: resource=44.7;
                        break;
                case 3: resource=42.3;
                        break;
                case 4: resource=39.1;
                        break;
                case 5: resource=34.7;
                        break;
                case 6: resource=28.5;
                        break;
                case 7: resource=20.5;
                        break;
                case 8: resource=11.8;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==15)
        {
            switch(wicketsLost)
            {
                case 0: resource=45.2;
                        break;
                case 1: resource=44.1;
                        break;
                case 2: resource=42.6;
                        break;
                case 3: resource=40.5;
                        break;
                case 4: resource=37.6;
                        break;
                case 5: resource=33.5;
                        break;
                case 6: resource=27.8;
                        break;
                case 7: resource=20.2;
                        break;
                case 8: resource=11.8;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==14)
        {
            switch(wicketsLost)
            {
                case 0: resource=42.7;
                        break;
                case 1: resource=41.7;
                        break;
                case 2: resource=40.4;
                        break;
                case 3: resource=38.5;
                        break;
                case 4: resource=35.9;
                        break;
                case 5: resource=32.2;
                        break;
                case 6: resource=27.0;
                        break;
                case 7: resource=19.9;
                        break;
                case 8: resource=11.8;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==13)
        {
            switch(wicketsLost)
            {
                case 0: resource=40.2;
                        break;
                case 1: resource=39.3;
                        break;
                case 2: resource=38.1;
                        break;
                case 3: resource=36.5;
                        break;
                case 4: resource=34.2;
                        break;
                case 5: resource=30.8;
                        break;
                case 6: resource=26.1;
                        break;
                case 7: resource=19.5;
                        break;
                case 8: resource=11.7;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==12)
        {
            switch(wicketsLost)
            {
                case 0: resource=37.6;
                        break;
                case 1: resource=36.8;
                        break;
                case 2: resource=35.8;
                        break;
                case 3: resource=34.3;
                        break;
                case 4: resource=32.3;
                        break;
                case 5: resource=29.4;
                        break;
                case 6: resource=25.1;
                        break;
                case 7: resource=19.0;
                        break;
                case 8: resource=11.6;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==11)
        {
            switch(wicketsLost)
            {
                case 0: resource=34.9;
                        break;
                case 1: resource=34.2;
                        break;
                case 2: resource=33.4;
                        break;
                case 3: resource=32.1;
                        break;
                case 4: resource=30.4;
                        break;
                case 5: resource=27.8;
                        break;
                case 6: resource=24.0;
                        break;
                case 7: resource=18.5;
                        break;
                case 8: resource=11.5;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==10)
        {
            switch(wicketsLost)
            {
                case 0: resource=32.1;
                        break;
                case 1: resource=31.6;
                        break;
                case 2: resource=30.8;
                        break;
                case 3: resource=29.8;
                        break;
                case 4: resource=28.3;
                        break;
                case 5: resource=26.1;
                        break;
                case 6: resource=22.8;
                        break;
                case 7: resource=17.9;
                        break;
                case 8: resource=11.4;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==9)
        {
            switch(wicketsLost)
            {
                case 0: resource=29.3;
                        break;
                case 1: resource=28.9;
                        break;
                case 2: resource=28.2;
                        break;
                case 3: resource=27.4;
                        break;
                case 4: resource=26.1;
                        break;
                case 5: resource=24.2;
                        break;
                case 6: resource=21.4;
                        break;
                case 7: resource=17.1;
                        break;
                case 8: resource=11.2;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==8)
        {
            switch(wicketsLost)
            {
                case 0: resource=26.4;
                        break;
                case 1: resource=26.0;
                        break;
                case 2: resource=25.5;
                        break;
                case 3: resource=24.8;
                        break;
                case 4: resource=23.8;
                        break;
                case 5: resource=22.3;
                        break;
                case 6: resource=19.9;
                        break;
                case 7: resource=16.2;
                        break;
                case 8: resource=10.9;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==7)
        {
            switch(wicketsLost)
            {
                case 0: resource=23.4;
                        break;
                case 1: resource=23.1;
                        break;
                case 2: resource=22.7;
                        break;
                case 3: resource=22.2;
                        break;
                case 4: resource=21.4;
                        break;
                case 5: resource=20.1;
                        break;
                case 6: resource=18.2;
                        break;
                case 7: resource=15.2;
                        break;
                case 8: resource=10.5;
                        break;
                case 9: resource=4.7;
                        break;
            }
        }

        else if (OversLeft==6)
        {
            switch(wicketsLost)
            {
                case 0: resource=20.3;
                        break;
                case 1: resource=20.1;
                        break;
                case 2: resource=19.8;
                        break;
                case 3: resource=19.4;
                        break;
                case 4: resource=18.8;
                        break;
                case 5: resource=17.8;
                        break;
                case 6: resource=16.4;
                        break;
                case 7: resource=13.9;
                        break;
                case 8: resource=10.1;
                        break;
                case 9: resource=4.6;
                        break;
            }
        }

        else if (OversLeft==5)
        {
            switch(wicketsLost)
            {
                case 0: resource=17.2;
                        break;
                case 1: resource=17.0;
                        break;
                case 2: resource=16.8;
                        break;
                case 3: resource=16.5;
                        break;
                case 4: resource=16.1;
                        break;
                case 5: resource=15.4;
                        break;
                case 6: resource=14.3;
                        break;
                case 7: resource=12.5;
                        break;
                case 8: resource=9.4;
                        break;
                case 9: resource=4.6;
                        break;
            }
        }

        else if (OversLeft==4)
        {
            switch(wicketsLost)
            {
                case 0: resource=13.9;
                        break;
                case 1: resource=13.8;
                        break;
                case 2: resource=13.7;
                        break;
                case 3: resource=13.5;
                        break;
                case 4: resource=13.2;
                        break;
                case 5: resource=12.7;
                        break;
                case 6: resource=12.0;
                        break;
                case 7: resource=10.7;
                        break;
                case 8: resource=8.4;
                        break;
                case 9: resource=4.5;
                        break;
            }
        }

        else if (OversLeft==3)
        {
            switch(wicketsLost)
            {
                case 0: resource=10.6;
                        break;
                case 1: resource=10.5;
                        break;
                case 2: resource=10.4;
                        break;
                case 3: resource=10.3;
                        break;
                case 4: resource=10.2;
                        break;
                case 5: resource=9.9;
                        break;
                case 6: resource=9.5;
                        break;
                case 7: resource=8.7;
                        break;
                case 8: resource=7.2;
                        break;
                case 9: resource=4.2;
                        break;
            }
        }

        else if (OversLeft==2)
        {
            switch(wicketsLost)
            {
                case 0: resource=7.2;
                        break;
                case 1: resource=7.1;
                        break;
                case 2: resource=7.1;
                        break;
                case 3: resource=7.0;
                        break;
                case 4: resource=7.0;
                        break;
                case 5: resource=6.8;
                        break;
                case 6: resource=6.6;
                        break;
                case 7: resource=6.2;
                        break;
                case 8: resource=5.5;
                        break;
                case 9: resource=3.7;
                        break;
            }
        }

        else if (OversLeft==1)
        {
            switch(wicketsLost)
            {
                case 0: resource=3.6;
                        break;
                case 1: resource=3.6;
                        break;
                case 2: resource=3.6;
                        break;
                case 3: resource=3.6;
                        break;
                case 4: resource=3.6;
                        break;
                case 5: resource=3.5;
                        break;
                case 6: resource=3.5;
                        break;
                case 7: resource=3.4;
                        break;
                case 8: resource=3.2;
                        break;
                case 9: resource=2.5;
                        break;
            }
        }

        else if (OversLeft==0)
        {
            switch(wicketsLost)
            {
                case 0: resource=0.0;
                        break;
                case 1: resource=0.0;
                        break;
                case 2: resource=0.0;
                        break;
                case 3: resource=0.0;
                        break;
                case 4: resource=0.0;
                        break;
                case 5: resource=0.0;
                        break;
                case 6: resource=0.0;
                        break;
                case 7: resource=0.0;
                        break;
                case 8: resource=0.0;
                        break;
                case 9: resource=0.0;
                        break;
            }
        }
    return resource;
}
