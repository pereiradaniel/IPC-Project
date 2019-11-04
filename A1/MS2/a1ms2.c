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
	struct Numbers numbers = {{0}};

	char yorn;

    // Display the title
	printf("\nContact Management System");
	printf("\n-------------------------");
	printf("\n");

    // Contact Name Input:

	// Ask for first name:
	printf("\nPlease enter the contact's first name: ");
	scanf("%30s", name.firstName);

	// Ask for middle initial:
	printf("\nDo you want to enter a middle initial(s)? (y or n): ");
	scanf("%s", &yorn);

	// Evaluate input and ask for middle initial if selected:
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("\nPlease enter the contact's middle initial(s): ");
		scanf(" %7[^\n]", name.middleInitial);
	}
	// NOTES:
	//	- No logic handling for NO, invalid input.  (Not specified by MS2)

	// Ask for last name:
	printf("\nPlease enter the contact's last name: ");
	scanf("%35s", name.lastName);


    // Contact Address Input:
	// Ask for street number:
	//	! Enforce values greater than 0
	do
	{
		printf("\nPlease enter the contact's street number: ");
		scanf("%d", &address.streetNumber);
	}
	while (address.streetNumber < 1);

	// Ask for street name:
	printf("\nPlease enter the contact's street name: ");
	scanf(" %40[^\n]", address.street);

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
	}

	// Ask for postal code:
	printf("\nPlease enter the contact's postal code: ");
	scanf(" %7[^\n]", address.postalCode);

	// Ask for city:
	printf("\nPlease enter the contact's city: ");
	scanf(" %40[^\n]", address.city);


    // Contact Numbers Input:
	// Ask for cell number:
	printf("\nDo you want to enter a cell phone number? (y or n): ");
	scanf("%s", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("\nPlease enter the contact's cell phone number: ");
		scanf(" %10s", numbers.cell);
		printf("%s", numbers.cell);
	}

	// Ask for home number:
	printf("\nDo you want to enter a home phone number? (y or n): ");
	scanf("%s", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("\nPlease enter the contact's home phone number: ");
		scanf(" %10s", numbers.home);
		printf("%s", numbers.home);
	}
	
	// Ask for business number:
	printf("\nDo you want to enter a business phone number? (y or n): ");
	scanf("%s", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("\nPlease enter the contact's business phone number: ");
		scanf(" %10s", numbers.business);
		printf("%s", numbers.business);
	}


    // Display Contact Summary Details
	printf("\nContact Details");
	printf("\n-----------------");

	printf("\nName Details");
	printf("\nFirst name: %s", name.firstName);
	if (name.middleInitial[0] != '\0') {
		printf("\nMiddle initial(s): %s", name.middleInitial);
	}
	printf("\nLast name: %s", name.lastName);
	printf("\n");

	printf("\nAddress Details");
	printf("\nStreet number: %d", address.streetNumber);
	printf("\nStreet name: %s", address.street);
	if (address.apartmentNumber > 0) {
		printf("\nApartment: %d", address.apartmentNumber);
	}
	printf("\nPostal code: %s", address.postalCode);
	printf("\nCity: %s", address.city);
	printf("\n");

	printf("\nPhone Numbers:");
	if (numbers.cell[0] != '\0') {
		printf("\nCell phone number: %s", numbers.cell);
	}
	if (numbers.home[0] != '\0') {
		printf("\nHome phone number: %s", numbers.home);
	}
	if (numbers.business[0] != '\0') {
		printf("\nBusiness phone number: %s", numbers.business);
	}
	printf("\n");

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

