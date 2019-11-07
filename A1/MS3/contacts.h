//==============================================
// Name:           Daniele Pãolo Grech Pereira
// Student Number: xxxxxxxxx
// Email:          xxxxxxxxx@myseneca.ca
// Section:        NZB
// Date:           
//==============================================
// Assignment:     1
// Milestone:      3
//==============================================

// Structure type Name declaration
struct Name {
	char 	firstName[31];
	char 	middleInitial[7];
	char 	lastName[36];
};

// Structure type Address declaration
struct Address {

	int 	streetNumber, apartmentNumber;
	char 	street[41], postalCode[8], city[41];

};

// Structure type Numbers declaration
struct Numbers {

	char 	cell[11], home[11], business[11];

};

// Structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers number;
};