// Structure type Name declaration
struct Name {
	char 	firstName[31];
	char 	middleInitial[7];
	char 	lastName[36];
};

// Structure type Address declaration
struct Address {
	char 	street[41], postalCode[8], city[41];
	int 	streetNumber, apartmentNumber;
};


// Structure type Numbers declaration
struct Numbers {
	char 	cell[11], home[11], business[11];
};
