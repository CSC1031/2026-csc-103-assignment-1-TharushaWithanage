//AS20250590
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mathematics = 0.0f;
    float science = 0.0f;
    float english = 0.0f;
    float total = 0.0f;
    float average = 0.0f;



    printf("Please Enter Mathematics marks(Out of 100): ");
    scanf("%f",&mathematics);

    printf("Please Enter Science marks(Out of 100): ");
    scanf("%f",&science);

    printf("Please Enter English marks(Out of 100): ");
    scanf("%f",&english);

    //Total and Average
    total = mathematics+science+english;
    average = total / 3.0;

    printf("Total: \n",total);
    printf("Average: %.2f\n",average);

    //Grade System
    if(80<average<100){
       printf("Grade: A\n");
    }
    else if(70<average<79){
        printf("Grade: B\n");
    }
    else if(60<average<69){
        printf("Grade: C\n");
    }
    else if(50<average<59){
       printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }

    //Pass and Fail
    if (mathematics >= 40 && science >= 40 && english >= 40){
      printf("Result: Pass\n");
    }
    else {
        printf("Result: Fail\n");
    }







    return 0;
}
