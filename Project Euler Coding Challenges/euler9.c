#include <stdio.h>

int flag = 1;
int val1;
int val2;
int val3;

int main()
{


    int firstNum = 1;
    int secondNum = 1;
    int thirdNum = 1;

    int answer = 1;
    
        for(firstNum = 1; firstNum < 1000; ++firstNum)
        {
            //printf("FIRST NUMBER IS: %d\n", firstNum);
            for(secondNum = 1; secondNum < 1000; ++secondNum)
            {
                //printf("SECOND NUMBER IS: %d\n", secondNum);
                for(thirdNum = 1; thirdNum < 1000; ++thirdNum)
                {
                    //printf("THIRD NUMBER IS: %d\n", thirdNum);

                    if((firstNum + secondNum + thirdNum) == 1000)
                    {      

                       // printf("THREE NUMBERS ADD TO 1000: %d + %d + %d\n", firstNum, secondNum, thirdNum);
        
                        if((firstNum*firstNum + secondNum*secondNum) == (thirdNum*thirdNum))
                        {
                            answer = firstNum*secondNum*thirdNum;
                            val1 = firstNum;
                            val2 = secondNum;
                            val3 = thirdNum;
                            break;

                            printf("THE ANSWER IS %d\n", answer);
                        }
                    }
                }
            }
        }

    printf("THE ANSWER IS %d\n", answer);
    printf("firstNum = %d\n", val1);
    printf("secondNum = %d\n", val2);
    printf("thirdNum = %d\n", val3);

    return 0;
}
