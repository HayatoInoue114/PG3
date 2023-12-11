#include <stdio.h>
#include <iostream>
#include <list>

int main(void) {
	std::list<const char*> stations{
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		//"Nishi-Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Otsuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Shin-Okubo",
		"Shinjuku",
		"Yoyogi",
		"Harajuku",
		"Shibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Osaki",
		"Shinagawa",
		//"Takanawa Geteway",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	std::cout << "1970" << std::endl;

	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	std::cout << "\n2019" << std::endl;

	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Tabata") {
			stations.insert(itr, "Nishi-Nippori");
			//++itr;
		}
	}

	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		std::cout << *itr << "\n";
	}

	std::cout << "\n2021" << std::endl;

	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		if (*itr == "Tamachi") {
			stations.insert(itr, "Takanawa Geteway");
			//++itr;
		}
	}

	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		std::cout << *itr << "\n";
	}


	return 0;
}