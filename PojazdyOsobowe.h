#pragma once
/*sposób                        klasa bazowa:
  dziedziczenie:      | public    protected   private
----------------------------------------------------------
   public             | public    protected      -*
   protected          | protected protected      -*
   private(domyœlny)  | private   private        -*

-* oznacza niedostêpne, jeœli nie ma przyjaŸni
 */
class PojazdyOsobowe : protected /*private/protected/public*/Pojazd {
public:
	int liczbaMiejsc;
public:
	PojazdyOsobowe(int liczba) : liczbaMiejsc(liczba) {
		std::cout << "Wywolanie konstruktora 1 klasy PojazdyOsobowe" << std::endl;
	}
	PojazdyOsobowe(float d, float sz, int liczba) : Pojazd(d, sz), liczbaMiejsc(liczba) {
		//this->dlugosc = d;
		//this->szerokosc = sz;
		std::cout << "Wywolanie konstruktora 2 klasy PojazdyOsobowe" << std::endl;
	}

public: 
	void stan() {
		std::cout << "stan silnika: " << this->stanSilnika << std::endl;;
	}
};