![Gauti duomenys](/Programavimo uzduotis/Screenshot 2023-04-06 at 16.31.36.png)
rodo, kiek laiko reikia trims skirtingoms duomenų struktūroms ("vektoriams", "sąrašams" ir "Deque") atlikti tris operacijas ("skaitymą", "rikiavimą" ir "rūšiavimą + išvedimą") su įvairaus dydžio įvesties duomenimis (1000, 10000, 100000, 1000000 ir 1000000 elementų).

Remdamiesi duomenimis, galime padaryti šiuos pastebėjimus:

Skaitymo laikas: Skaitymo laikas visose duomenų struktūrose yra gana panašus ir, didėjant įvesties dydžiui, reikšmingai nedidėja.

Rūšiavimo laikas: Vektoriaus ir sąrašo rūšiavimo laikas yra gerokai trumpesnis nei Deque, o vektoriaus rūšiavimo laikas yra mažiausias.

Rūšiavimo ir išvedimo laikas: Ir vėl Vektoriaus ir Sąrašo laikas panašus, o Deque šios operacijos laikas šiek tiek trumpesnis.

Bendras laikas: Vektoriaus bendras laikas yra mažiausias visų įvesties dydžių atveju, o Deque bendras laikas yra didžiausias. Sąrašo bendras laikas yra gana panašus į vektoriaus, tik šiek tiek padidėja, kai įvesties dydžiai yra didesni.

Apibendrinant galima teigti, kad, remiantis pateiktais duomenimis, efektyviausia duomenų struktūra šioms operacijoms atlikti yra Vektoriai, po jos eina Sąrašai, o  Deque yra mažiausiai efektyvi struktūra. Tačiau verta pažymėti, kad šie rezultatai gali skirtis, kai atliekamos skirtingo tipo operacijos ir duomenų dydžiai.

Duomenys:
Vectors:

1000 elementų nuskaitymas užtruko: 0.00995642 s
1000 elementų rikiavimas uztruko: 0.00486162 s
1000 elementų rūšiavimas ir išvedimas užtruko: 0.0541491 s
Visas laikas - 0.0852501


10000 elementų nuskaitymas užtruko: 0.0394166 s
10000 elementų rikiavimas uztruko: 0.0506257 s
10000 elementų rūšiavimas ir išvedimas užtruko: 0.238057 s
Visas laikas - 0.385391


100000 elementų nuskaitymas užtruko: 0.389174 s
100000 elementų rikiavimas uztruko: 0.287582 s
100000 elementų rūšiavimas ir išvedimas užtruko: 2.32627 s
Visas laikas - 3.41165


1000000 elementų nuskaitymas užtruko: 4.13663 s
1000000 elementų rikiavimas uztruko: 2.96931 s
1000000 elementų rūšiavimas ir išvedimas užtruko: 25.7986 s
Visas laikas - 36.6666


10000000 elementų nuskaitymas užtruko: 41.4517 s
10000000 elementų rikiavimas uztruko: 34.768 s
10000000 elementų rūšiavimas ir išvedimas užtruko: 284.378 s
Visas laikas - 397.494



Lists:

1000 elementų nuskaitymas užtruko: 0.009739 s
1000 elementų rikiavimas uztruko: 0.00159208 s
1000 elementų rūšiavimas ir išvedimas užtruko: 0.0547159 s
Visas laikas - 0.0810231


10000 elementų nuskaitymas užtruko: 0.0389912 s
10000 elementų rikiavimas uztruko: 0.0213869 s
10000 elementų rūšiavimas ir išvedimas užtruko: 0.321853 s
Visas laikas - 0.429954


100000 elementų nuskaitymas užtruko: 0.38193 s
100000 elementų rikiavimas uztruko: 0.110093 s
100000 elementų rūšiavimas ir išvedimas užtruko: 3.06035 s
Visas laikas - 3.95126


1000000 elementų nuskaitymas užtruko: 3.84435 s
1000000 elementų rikiavimas uztruko: 0.867738 s
1000000 elementų rūšiavimas ir išvedimas užtruko: 30.5971 s
Visas laikas - 38.9686


10000000 elementų nuskaitymas užtruko: 39.4182 s
10000000 elementų rikiavimas uztruko: 9.62479 s
10000000 elementų rūšiavimas ir išvedimas užtruko: 371.635 s
Visas laikas - 458.3



Deque:

1000 elementų nuskaitymas užtruko: 0.00973883 s
1000 elementų rikiavimas uztruko: 0.0153382 s
1000 elementų rūšiavimas ir išvedimas užtruko: 0.046655 s
Visas laikas - 0.087133


10000 elementų nuskaitymas užtruko: 0.037029 s
10000 elementų rikiavimas uztruko: 0.0879386 s
10000 elementų rūšiavimas ir išvedimas užtruko: 0.252539 s
Visas laikas - 0.423342


100000 elementų nuskaitymas užtruko: 0.387741 s
100000 elementų rikiavimas uztruko: 0.626811 s
100000 elementų rūšiavimas ir išvedimas užtruko: 2.5014 s
Visas laikas - 3.90218


1000000 elementų nuskaitymas užtruko: 4.52041 s
1000000 elementų rikiavimas uztruko: 9.18467 s
1000000 elementų rūšiavimas ir išvedimas užtruko: 26.7792 s
Visas laikas - 44.2913





