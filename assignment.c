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
    printf("Press 1 to SignUp. Press 2 to Login. 3 to Exit.\n");
    scanf("%d", &input);
    return input;
}
int main()
{
    int givenInput, anotherUserConfirmation, logout, confirmUserContinue, confirmPassordContinue, isMatched = 0, passwordMatch = 0;
    char userUsername[100], userPassword[100], givenUserName[100], givenPassword[100];
    while (1)
    {
        givenInput = intro();
        if (givenInput == 1)
        {
            while (1)
            {
                for (int i = 1; i < 100; i++)
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
        else if (givenInput == 2)
        {
            while (1)
            {
                printf("############## Welcome to Our Login Pannel ##############\n");
                printf("#                                                       #\n");
                printf("#                                                       #\n");
                printf("           Give me Your username: ");
                scanf("%s", &givenUserName);
                for (int i = 1; i < 101; i++)
                {
                    if (*givenUserName == userUsername[i])
                    {
                        isMatched = 1;
                    }
                }
                if (isMatched == 1)
                {
                    printf("           Give me a password: ");
                    scanf("%s", &givenPassword);
                    printf("#                                                       #\n");
                    printf("#                     Loading....                       #\n");
                    printf("#                                                       #\n");
                    for (int j = 1; j < 100; j++)
                    {
                        if (*givenPassword == userPassword[j])
                        {
                            passwordMatch = 1;
                        }
                        
                    }
                    
                    if (passwordMatch == 1)
                    {
                        printf("#################### Congratulations! ###################\n");
                        printf("#                                                       #\n");
                        printf("#                                                       #\n");
                        printf("#                                                       #\n");
                        printf("#                 Welcome To Our Website                #\n");
                        printf("#                                                       #\n");
                        printf("#                                                       #\n");
                        printf("#                                                       #\n");
                        printf("#########################################################\n\n");
                    }
                    else
                    {
                        printf("#                                                       #\n");
                        printf("#        You have given the wrong password.             #\n");
                        printf("#            Check the password again.                  #\n");
                        printf("#               To continue press 1                     #\n");
                        printf("#                                                       #\n");
                        printf("#########################################################\n\n\n");
                        scanf("%d", &confirmPassordContinue);
                        if (confirmPassordContinue == 1)
                        {
                            isMatched = 0;
                            break;
                        }
                        break;
                    }
                    printf("If you want to LogOut press 1\n\n");
                    scanf("%d", &logout);
                    if (logout == 1)
                    {
                        isMatched = 0;
                        break;
                    }
                }
                else
                {
                    printf("#                                                       #\n");
                    printf("#   Your username hasn't found. Try to SignUp first.    #\n");
                    printf("#                To continue press 1                    #\n");
                    printf("#                                                       #\n");
                    printf("#########################################################\n\n\n");
                    scanf("%d", &confirmUserContinue);
                    if (confirmUserContinue == 1)
                    {
                        break;
                    }
                }
            }
        }
        else if(givenInput == 3)
        {
            break;
        }
        
    }

    return 0;
}
