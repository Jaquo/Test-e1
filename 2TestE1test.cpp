// TestE1.cpp 


#include <iostream>
using namespace std;

const int NUMPLANTTYPES = 7;

int main()
{
	int PlantNumbers[NUMPLANTTYPES] = { 15, 36, 49, 110, 21, 0, 17 };
	int PotSize[NUMPLANTTYPES] = { 1, 4, 3, 4, 3, 1, 2 };
	int prices[] = {4.50, 12.00, 12.00, 12.00, 12.00, 4.50, 7.99}

	//size 1 = $4.50
	//size 2 = $7.99
	//size 3 = $12.00
	//size 4 = $12.00

	double plantPrices = { 4.50, 12.00, 12.00, 12.00, 12.00, 4.50, 7.99 };

	for (int i = 0; i < 6; i++)

	{

		double totalPrice = PlantNumbers[i] * PotSize[i] * prices[i];

		cout << "Plant amount: " << PlantNumbers[i] << endl;
		cout << "Pot size: " << PotSize[i] << endl;
		cout << "Price per plant: " << prices[i] << endl;
		cout << "Total price is: " << totalPrice << endl;

	};


	// cout << "You have " << PlantNumbers[0] << " plants." << " Which requires pot size " << PotSize[0] << "." << " and will cost you $4.50 per plant." << " So the final total is " << 4.50 * PlantNumbers[0] << endl;
	// cout << "You have " << PlantNumbers[1] << " plants." << " Which requires pot size " << PotSize[1] << "." << " and will cost you $12.00 per plant." << " So the final total is " << 12.00 * PlantNumbers[1] << endl;
	// cout << "You have " << PlantNumbers[2] << " plants." << " Which requires pot size " << PotSize[2] << "." << " and will cost you $12.00 per plant." << " So the final total is " << 12.00 * PlantNumbers[2] << endl;
	// cout << "You have " << PlantNumbers[3] << " plants." << " Which requires pot size " << PotSize[3] << "." << " and will cost you $12.00 per plant." << " So the final total is " << 12.00 * PlantNumbers[3] << endl;
	// cout << "You have " << PlantNumbers[4] << " plants." << " Which requires pot size " << PotSize[4] << "." << " and will cost you $12.00 per plant." << " So the final total is " << 12.00 * PlantNumbers[4] << endl;
	// cout << "You have " << PlantNumbers[5] << " plants." << " Which requires pot size " << PotSize[5] << "." << " and will cost you $4.50 per plant." << " So the final total is " << 4.50 * PlantNumbers[5] << endl;
	// cout << "You have " << PlantNumbers[6] << " plants." << " Which requires pot size " << PotSize[6] << "." << " and will cost you $7.99 per plant" << " So the final total is " << 7.99 * PlantNumbers[6] << endl;

	return 0;
}


// 
//	for (int i = 0; i < 3; i++) {
//
//	double totalPrice = phones[i].price + phones[i].warrantyPrice;

//	cout << "phone" << i + 1 << endl;
//	cout << "Warranty Price: $" << phones[i].warrantyPrice << endl;
//	cout << "Phone Price: $" << phones[i].price << endl;
//	cout << "The total price of everything " << "$" << totalPrice << endl;
//}




	// int PotPerorder[NUMPLANTTYPES] = { 1, 4, 3, 4, 3, 1, 2 };

	// int PricesPerOrder = {4.50, 24.96,  }



	// size 1 = $4.50
	// size 2 = $7.99
	// size 3 = $12.00
	// size 4 = $12.00

		//	int PlantNumbers[NUMPLANTTYPES] = { 15, 36, 49, 110, 21, 0, 17 };
		//	int PotSize[NUMPLANTTYPES] = { 1, 4, 3, 4, 3, 1, 2 };

	