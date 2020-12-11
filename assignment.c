#include <stdio.h>
int intro()
{
    int input;
    printf("###################################################\n");
    printf("            Mini Cyber Management System           \n");
    printf("                  Team Debugger                    \n");
    printf("Team Members:\n");
    printf("1.Samiul Karim			    ID: 201-15-3041\n");
    printf("2.Jubayer Ahamed		    ID: 201-15-3372\n");
    printf("3.Anamul Islam			    ID: 201-15-3115\n");
    printf("4.Md. Abdul Khalek Kakon	    ID: 201-15-3124\n");
    printf("5.A.B.M.Azad        		    ID: 201-15-3310\n");
    printf("###################################################\n");
    printf("Press 1 to SignUp. Press 2 to Login.\n");
    scanf("%d", &input);
    return input;
}
int main()
{
    int givenInput, anotherUserConfirmation;
    char userUsername[100], userPassword[100];
    while (1)
    {
        givenInput = intro();
        if (givenInput == 1)
        {
            while (1)
            {
                for (int i = 1; i < 10; i++)
                {
                    printf("############### Welcome To Our SIgnUp Panel ##############\n");
                    printf("#                                                        #\n");
                    printf("#                                                        #\n");
                    printf("           Give me a username: ");
                    scanf("%s", &userUsername[i]);
                    printf("           Give me a password: ");
                    scanf("%s", &userPassword[i]);
                    printf("#                                                        #\n");
                    printf("#                                                        #\n");
                    printf("################### Congratulations ######################\n");
                    printf("\nDo you want to add another user? 1 to 'YES' 2 to 'NO'\n");
                    scanf("%d", &anotherUserConfirmation);
                    if (anotherUserConfirmation == 2)
                    {
                        break;
                    }
                }
                break;
            }
        }
    }

    return 0;
}
