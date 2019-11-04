//==============================================
// Name:           Full name here
// Student Number: #########
// Email:          userID@myseneca.ca
// Section:        XXX
// Date:           
//==============================================
// Assignment:     1
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "./contacts.h"

int main (void)
{
    // Declare variables here:
	struct Name name = {{""}};
	struct Address address = {0,0,"","",""};
	struct Numbers number = {{0}};

	char yorn;

    // Display the title
	printf("\nContact Management System");
	printf("\n-------------------------");
	printf("\n");

    // Contact Name Input:

	// Ask for first name:
	printf("\nPlease enter the contact's first name: ");
	scanf("%30s", name.firstName);
	printf("\nfisrtName = %s", name.firstName);

	// Ask for middle initial:
	printf("\nDo you want to enter a middle initial(s)? (y or n): ");
	scanf("%s", &yorn);
	
	// Evaluate input and ask for middle initial if selected:
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("\nPlease enter the contact's middle initial(s): ");
		scanf("%6s", name.middleInitial);
		printf("\nmiddleInitial = %s", name.middleInitial);
	}
	// NOTES:
	//	- No logic handling for NO, invalid input.  (Not specified by MS2)

	// Ask for last name:
	printf("\nPlease enter the contact's last name: ");
	scanf("%35s", name.lastName);
	printf("\nlastName = %s", name.lastName);


    // Contact Address Input:
	// Ask for street number:
	//	! Enforce values greater than 0
	do
	{
		printf("\nPlease enter the contact's street number: ");
		scanf("%d", &address.streetNumber);
	}
	while (address.streetNumber < 1);
	printf("\nstreetNumber = %d", address.streetNumber);

	// Ask for street name:
	printf("\nPlease enter the contact's street name: ");
	scanf("%40s", address.street);
	printf("\nstreet = %s", address.street);

	// Ask for apartment number:
	printf("\nDo you want to enter an apartment number? (y or n): ");
	scanf("%s", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		do
		{
			printf("\nPlease enter the contact's apartment number: ");
			scanf("%d", &address.apartmentNumber);
		}
		while (address.apartmentNumber < 1);
	printf("\napartmentNumber = %d", address.apartmentNumber);
	}

	// Ask for postal code:
	printf("\nPlease enter the contact's postal code: ");
	scanf("%7s", address.postalCode);
	printf("postalCode = %s", address.postalCode);

	// Ask for city:
	printf("\nPlease enter the contact's city: ");
	scanf("%40s", address.city);
	printf("city = %s", address.city);



    // Contact Numbers Input:



    // Display Contact Summary Details



    // Display Completion Message



    return 0;
}

/*  SAMPLE OUTPUT:
    
    Contact Management System
    -------------------------
    Please enter the contact's first name: Tom
    Do you want to enter a middle initial(s)? (y or n): y
    Please enter the contact's middle initial(s): L. A.
    Please enter the contact's last name: Wong Song
    Please enter the contact's street number: 20
    Please enter the contact's street name: Keele Street
    Do you want to enter an apartment number? (y or n): y
    Please enter the contact's apartment number: 40
    Please enter the contact's postal code: A8A 4J4
    Please enter the contact's city: North York
    Do you want to enter a cell phone number? (y or n): Y
    Please enter the contact's cell phone number: 9051116666
    Do you want to enter a home phone number? (y or n): Y
    Please enter the contact's home phone number: 7052227777
    Do you want to enter a business phone number? (y or n): Y
    Please enter the contact's business phone number: 4163338888

    Contact Details
    ---------------
    Name Details
    First name: Tom
    Middle initial(s): L. A.
    Last name: Wong Song

    Address Details
    Street number: 20
    Street name: Keele Street
    Apartment: 40
    Postal code: A8A 4J4
    City: North York

    Phone Numbers:
    Cell phone number: 9051116666
    Home phone number: 7052227777
    Business phone number: 4163338888

    Structure test for Name, Address, and Numbers Done!
*/

