#include<iostream>
#include <cctype>
using namespace std;
int main() {
	int sayi, basamak1, basamak2, basamak3, basamak4, basamak5;
	string yn;
	cout << "5 Basamakli Bir Sayi Girin: ";
	cin >> sayi;

	if ((sayi < 100000) && (sayi > 9999)) {
		basamak1 = sayi / 10000;
		basamak2 = sayi % 10000;
		basamak2 = basamak2 / 1000;
		basamak3 = sayi % 1000;
		basamak3 = basamak3 / 100;
		basamak4 = sayi % 100;
		basamak4 = basamak4 / 10;
		basamak5 = sayi % 10;
		if ((basamak1 == basamak5) && (basamak2 == basamak4)) {
			cout << sayi << " sayisi bir palindromdur.(" << basamak1 << "  "
				<< basamak2 << "  " << basamak3 << "  " << basamak4 << "  " << basamak5 << ")";
		}
		else {
			cout << "\n" << sayi << " sayisi bir palindrom degildir!";
		}
		while(true){
		cout << "\nYeniden Deneyin (Y|N): ";
		cin >> yn;
		if (yn == "Y" || yn == "y") {
			return main();
			continue;
		}

		else if (yn == "N" || yn == "n")
		{
			cout << "\n";
			break;
		}

		else
		{
			continue;
		}

	}
}
	return 0;
}