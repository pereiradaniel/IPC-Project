//==============================================
// Name:           Daniele Paolo Grech Pereira
// Student Number: 
// Email:          
// Section:        
// Date:           03/Nov/2019
//==============================================
// Assignment:     1
// Milestone:      2
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "./contacts.h"

int main(void)
{
	// Declare variables here:
	struct Name name = { {""} };
	struct Address address = { 0,0,"","","" };
	struct Numbers numbers = { {0} };

	char yorn;


	// Display the title
	printf("Contact Management System\n");
	printf("-------------------------\n");


	// Contact Name Input:

	// Ask for first name:
	printf("Please enter the contact's first name: ");
	scanf("%30s", name.firstName);

	// Ask for middle initial:
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &yorn);

	// Evaluate input and ask for middle initial if selected:
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7[^\n]", name.middleInitial);
	}

	// Ask for last name:
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name.lastName);


	// Contact Address Input:
	// Ask for street number:
	//	! Enforce values greater than 0
	do
	{
		printf("Please enter the contact's street number: ");
		scanf("%d", &address.streetNumber);
	} while (address.streetNumber < 1);

	// Ask for street name:
	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", address.street);

	// Ask for apartment number:
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		do
		{
			printf("Please enter the contact's apartment number: ");
			scanf("%d", &address.apartmentNumber);
		} while (address.apartmentNumber < 1);
	}

	// Ask for postal code:
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address.postalCode);

	// Ask for city:
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", address.city);


	// Contact Numbers Input:
	// Ask for cell number:
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %10s", numbers.cell);
		printf("%s", numbers.cell);
	}

	// Ask for home number:
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %10s", numbers.home);
	}

	// Ask for business number:
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &yorn);
	if (yorn == 'y' || yorn == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %10s", numbers.business);
	}


	// Display Contact Summary Details
	printf("\nContact Details");
	printf("\n---------------");

	printf("\nName Details:");	
	printf("\nFirst name: %s", name.firstName);
	if (name.middleInitial[0] != '\0')
	{
		printf("\nMiddle initial(s): %s", name.middleInitial);
	}
	printf("\nLast name: %s", name.lastName);
	printf("\n");

	printf("\nAddress Details:");
	printf("\nStreet number: %d", address.streetNumber);
	printf("\nStreet name: %s", address.street);
	if (address.apartmentNumber > 0)
	{
		printf("\nApartment: %d", address.apartmentNumber);
	}
	printf("\nPostal code: %s", address.postalCode);
	printf("\nCity: %s", address.city);
	printf("\n");


	printf("\nPhone Numbers:");

	if (numbers.cell[0] != '\0')
	{
		printf("\nCell phone number: %s", numbers.cell);
	}
	if (numbers.home[0] != '\0')
	{
		printf("\nHome phone number: %s", numbers.home);
	}
	if (numbers.business[0] != '\0') {
		printf("\nBusiness phone number: %s", numbers.business);
	}
	printf("\n");


	// Display Completion Message
	printf("\nStructure test for Name, Address, and Numbers Done!\n");



	return 0;
}
