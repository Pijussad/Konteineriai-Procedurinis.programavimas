### Mokinio pažymių skaičiuoklė
Kodas skirtas įvesti studentų duomenis, bei skaičiuoti galutinius balus naudojant vidurkį arba medianą. 
Galutinis balas skaičiuojamas pagal formulę `(0.4 * namų darbų vidurkis + 0.6 * egzamino pažymys)`.

Ši programa leidžia vartotojams įvesti mokinių duomenis ir apskaičiuoti galutinius pažymius naudojant vidurkį arba medianą. Pažymių ir mokinių skaičius neribojamas, o programa palaiko du pažymių saugojimo būdus: C masyvus ir std::vector.
0.1 versija
Funkcijos
•	Įveskite mokinio vardą ir pavardę
•	Įveskite mokinio namų darbus ir egzamino pažymius
•	Pažymių ir studentų skaičius yra neribotas. Tai pasiekiama naudojant masyvus, `new`, `delete` metodą.
•	Apskaičiuokite galutinį balą naudodami vidurkio formulę (0,4 * vidutinis namų darbų įvertinimas + 0,6 * egzamino pažymys)
•	Rodyti galutinius balus ekrane
0.2 versija
funkcijos
•	Leisti nuskaityti duomenis iš failo (kursiokai.txt)
•	Išvestyje rūšiuokite mokinius pagal vardą (pirmą arba paskutinį).
0.3 versija
Refaktoringas
•	Jei reikia, naudokite struktūras
•	Perkelkite funkcijas ir duomenų tipus į atskirus antraščių failus (*.h)
•	Klaidų atvejais naudokite išimčių tvarkymą
0.4 versija
funkcijos
•	Sukurkite failų generatorių, kad sukurtumėte atsitiktinius studentų sąrašo failus
•	Generuoti skirtingų įrašų dydžių failus: 1000; 10 000; 100 000; 1 000 000; 10 000 000
•	Suskirstykite mokinius į dvi kategorijas pagal galutinį balą: „prastas“ (balas < 5,0) ir „kietas“ (balas >= 5,0)
•	Išvestis surūšiavo mokinius į du naujus failus
•	Atlikti įvairių programos žingsnių greičio analizę
0.5 versija
Konteinerių testavimas
Išmatuokite programos našumą naudodami tris skirtingus konteinerių tipus:
•	std::vektorius
•	std::sąrašas
•	std::deque
Išbandykite programą su failais, kuriuose yra 1000; 10 000; 100 000; 1 000 000; ir 10 000 000 įrašų.
1.0 versija
Optimizavimas
Remdamiesi skirtingomis strategijomis, optimizuokite mokinių rūšiavimą ir padalijimą į dvi kategorijas („prastas“ ir „kietas“):
•	1 strategija: bendro mokinio konteinerio padalijimas į du naujus to paties tipo konteinerius
•	2 strategija: bendro mokinio konteinerio padalijimas naudojant tik vieną naują konteinerį
Išmatuokite programos našumą naudodami skirtingus konteinerių tipus (vektorių, sąrašą ir deque) ir palyginkite rezultatus. Taip pat pritaikykite tinkamus algoritmus, kad paspartintumėte studento skaidymo procedūrą vektoriniame konteineryje.
Saugyklos struktūra
•	mylib.h: antraštės failas, kuriame yra funkcijų deklaracijos ir duomenų struktūros
•	mylib.cpp: šaltinio failas su programos įgyvendinimu
•	kursiokai.txt: Duomenų failo pavyzdys
•	README.md: Readme failas, kuriame yra informacija apie programą ir jos versijas

Naudojimas:
1.	Sukompiliuokite programą naudodami pageidaujamą kompiliatorių.
2.	Paleiskite sukompiliuotą vykdomąjį failą.
3.	Vykdykite instrukcijas, kad įvestumėte mokinio duomenis arba skaitytumėte duomenis iš failo.
4.	Programa apskaičiuos galutinius pažymius ir parodys juos ekrane.
Testavimas
Programa buvo išbandyta naudojant įvairius įrašų dydžius ir konteinerių tipus, kad būtų užtikrintas jos veikimas ir funkcionalumas. Testavimo parametrai apima procesoriaus, RAM ir HDD specifikacijas.

Diegimas:
Norėdami įdiegti ir paleisti programą, atlikite šiuos veiksmus:
1.	Klonuoti saugyklą: git klonas https://github.com/yourusername/yourrepository.git
2.	Sukompiliuokite šaltinio failus: g++ mylib.cpp -o student_grades
3.	Paleiskite programą: ./student_grades
Prieš sudarydami kodą įsitikinkite, kad jūsų sistemoje yra įdiegtas C++ kompiliatorius.
Pagalbininkai
•	Jūsų vardas (tavo vardas.

Mokinio pažymių skaičiuoklė
Ši programa leidžia vartotojams įvesti mokinių duomenis ir apskaičiuoti galutinius pažymius naudojant vidurkį arba medianą. Pažymių ir mokinių skaičius neribojamas, o programa palaiko du pažymių saugojimo būdus: C masyvus ir std::vector.
0.1 versija
funkcijos
•	Įveskite mokinio vardą ir pavardę
•	Įveskite mokinio namų darbus ir egzamino pažymius
•	Apskaičiuokite galutinį balą naudodami vidurkio formulę (0,4 * vidutinis namų darbų įvertinimas + 0,6 * egzamino pažymys)
•	Rodyti galutinius balus ekrane
0.2 versija
funkcijos
•	Leisti nuskaityti duomenis iš failo (kursiokai.txt)
•	Išvestyje rūšiuokite mokinius pagal vardą (pirmą arba paskutinį).
0.3 versija
Refaktoringas
•	Jei reikia, naudokite struktūras
•	Perkelkite funkcijas ir duomenų tipus į atskirus antraščių failus (*.h)
•	Klaidų atvejais naudokite išimčių tvarkymą
0.4 versija
funkcijos
•	Sukurkite failų generatorių, kad sukurtumėte atsitiktinius studentų sąrašo failus
•	Generuoti skirtingų įrašų dydžių failus: 1000; 10 000; 100 000; 1 000 000; 10 000 000
•	Suskirstykite mokinius į dvi kategorijas pagal galutinį balą: „prastas“ (balas < 5,0) ir „kietas“ (balas >= 5,0)
•	Išvestis surūšiavo mokinius į du naujus failus
•	Atlikti įvairių programos žingsnių greičio analizę
0.5 versija
Konteinerių testavimas
Išmatuokite programos našumą naudodami tris skirtingus konteinerių tipus:
•	std::vektorius
•	std::sąrašas
•	std::deque
Išbandykite programą su failais, kuriuose yra 1000; 10 000; 100 000; 1 000 000; ir 10 000 000 įrašų.
1.0 versija
Optimizavimas
Remdamiesi skirtingomis strategijomis, optimizuokite mokinių rūšiavimą ir padalijimą į dvi kategorijas („prastas“ ir „kietas“):
•	1 strategija: bendro mokinio konteinerio padalijimas į du naujus to paties tipo konteinerius
•	2 strategija: bendro mokinio konteinerio padalijimas naudojant tik vieną naują konteinerį
Išmatuokite programos našumą naudodami skirtingus konteinerių tipus (vektorių, sąrašą ir deque) ir palyginkite rezultatus. Taip pat pritaikykite tinkamus algoritmus, kad paspartintumėte studento skaidymo procedūrą vektoriniame konteineryje.
Saugyklos struktūra
•	mylib.h: antraštės failas, kuriame yra funkcijų deklaracijos ir duomenų struktūros
•	mylib.cpp: šaltinio failas su programos įgyvendinimu
•	kursiokai.txt: Duomenų failo pavyzdys
•	README.md: Readme failas, kuriame yra informacija apie programą ir jos versijas
Naudojimas
5.	Sukompiliuokite programą naudodami pageidaujamą kompiliatorių.
6.	Paleiskite sukompiliuotą vykdomąjį failą.
7.	Vykdykite instrukcijas, kad įvestumėte mokinio duomenis arba skaitytumėte duomenis iš failo.
8.	Programa apskaičiuos galutinius pažymius ir parodys juos ekrane.
Testavimas
Programa buvo išbandyta naudojant įvairius įrašų dydžius ir konteinerių tipus, kad būtų užtikrintas jos veikimas ir funkcionalumas. Testavimo parametrai apima procesoriaus, RAM ir HDD specifikacijas.
Montavimas
Norėdami įdiegti ir paleisti programą, atlikite šiuos veiksmus:
4.	Klonuoti saugyklą: git klonas https://github.com/Pijussad/1-uzdavinys.git
5.	Sukompiliuokite šaltinio failus: g++ mylib.cpp -o student_grades
6.	Paleiskite programą: ./student_grades
Prieš sudarydami kodą įsitikinkite, kad jūsų sistemoje yra įdiegtas C++ kompiliatorius.
Pagalbininkai
•	Jūsų vardas (tavo vardas.



