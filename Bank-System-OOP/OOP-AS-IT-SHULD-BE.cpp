#include <iostream>
#include "clsLoginScreen.h"
#include "clsUser.h"

int main()
//clsUser(enMode Mode, string FirstName, string LastName,
//    string Email, string Phone, string UserName, string Password,
//    int Permissions) :
//    clsPerson(FirstName, LastName, Email, Phone)

{
    
    clsUser user();
    while (true)
    {
        clsLoginScreen::ShowLoginScreen();
    }

    return 0;
}