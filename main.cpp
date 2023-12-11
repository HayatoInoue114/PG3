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
		"Nishi-Nippori",
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
		"Osaka",
		"Shinagawa",
		"Takanawa Geteway",
		"Tamachi",
		"Hamamatsucho",
		"Shimbashi",
		"Yurakucho"
	};

	for (auto itr = stations.begin(); itr != stations.end(); ++itr) {
		
		std::cout << *itr << "\n";
	}


	return 0;
}