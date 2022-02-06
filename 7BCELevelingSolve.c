#include <stdio.h>

int main()
{
    int totleInputs = 0;
    int ans = 0;

    float RL[20];
    float FRL = 0;
    float LRL = 0;

    float HI[20];

    float BS[20];
    float TBS = 0;

    float IS[20];

    float FS[20];
    float TFS = 0;

    while (1)
    {
        char input;

        printf("\nWhat would you like to get into : ");
        printf("\npress s for BS, IS and FS input for leveling. ");
        printf("\npress q for quit. ");
        printf("\nEnter your Selection : ");
        scanf(" %c", &input);

        switch (input)
        {
        case 's':
            

            for (int i = 1; i < 20; i++)
            {
                if (ans != 0)
                {
                    goto result;
                }
                else if (i==1)
                {
                    printf("\nEnter the first RL value of Sn.1 : ");
                    scanf(" %f", &RL[0]);
                    FRL = RL[0];
                }
                
                printf("\nEnter the value 0f BS for Sn.%d : ", i);
                scanf(" %f", &BS[i - 1]);

                printf("Enter the value of IS for Sn.%d : ", i);
                scanf(" %f", &IS[i - 1]);

                printf("Enter the value of FS for Sn.%d : ", i);
                scanf(" %f", &FS[i - 1]);
                
                if (BS[i-1] != 0 || IS[i-1] != 0 || FS[i-1] != 0)
                {
                    totleInputs = i;
                }
                if (i == 4 || i == 6 || i > 8)
                {
                    printf("\nEnter 0 for continue OR enter else number to result.");
                    scanf(" %d", &ans);
                }
            }
            break;
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        default:
            break;
        }

    result:

        printf("The index is : \n|   Sn  |      BS     |     IS     |     FS     |     HI     |     RL     |\n");

        for (int i = 1; i <= totleInputs; i++)
        {
            if (i == 1)
            {
                HI[i - 1] = RL[i - 1] + BS[i - 1];
            }
            else if (i != 1)
            {
                RL[i - 1] = HI[i - 2] - IS[i - 1] - FS[i - 1];
                if (BS[i - 1] != 0)
                {
                    HI[i - 1] = RL[i - 1] + BS[i - 1];
                }
                else
                {
                    HI[i - 1] = HI[i - 2];
                }
            }
            printf("\n|   %d   |   %f   |   %f   |   %f   |   %f   |   %f   |\n", i, BS[i - 1], IS[i - 1], FS[i - 1], HI[i - 1], RL[i - 1]);
        }

        for (int i = 0; i < totleInputs; i++)
        {
            TBS = TBS + BS[i];
            TFS = TFS + FS[i];
        }

        FRL = RL[0];
        LRL = RL[totleInputs - 1];

        printf("\n|        |              TBS - TFS            |   LRL-FRL    |");
        printf("\n|        |        %f                    |   %f       |             |\n", TBS - TFS, LRL - FRL);
    }

end:

    return 0;
}