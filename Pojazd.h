#pragma once

class Pojazd {
private:
	float dlugosc;
public:
	float szerokosc;
protected:
	bool stanSilnika;
public:
	Pojazd() {
		std::cout << "Wywolanie konstruktora domyslnego klasy Pojazd" << std::endl;
	}
	Pojazd(float d, float sz) :dlugosc(d), szerokosc(sz) {
		this->stanSilnika = 0;//silnik wy³¹czony
		std::cout << "Wywolanie konstruktora klasy Pojazd" << std::endl;
	}
	~Pojazd() {
		std::cout << "Wywolanie destruktora klasy Pojazd" << std::endl;
	}
public:
	void wlaczWylaczSilnik() {
		this->stanSilnika = !this->stanSilnika;
	}
};
