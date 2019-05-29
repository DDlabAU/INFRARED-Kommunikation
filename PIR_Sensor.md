# PIR-Sensor
PIR-sensoren bruges til at registrerer beveægelse. Du kender den måske fra lyset i din garage der automatisk tænder når du kommer hjem, eller lysende i Schön bygningen der slukker hvis man ikke har bevæget sig i 10 minutter. Den er god at bruge da den er meget simpel og ikke kræver nogle eksterne biblioteker for at virke.

PIR står for _Passive Infrared Sensor_. Grundlæggende set fungerer den ved at den måler infrarøde lysværdier i et rum. Hvis disse værdier ændrer sig udsender sensoren et signal. Rummets infrarøde værdier vil typisk ændrer sig hvis der er noget der bevæger sig. Dette er fordi bevægelsen reflekterer det infrarøde lys rundt i rummet på en ny måde end hvad sensoren havde målt.

## Ting du skal bruge:

1x PIR-Sensor

1x Arduino

1x Arduino USB kabel til at overføre koden

## Sådan Gør Du
Start med at forbind PIR-Sensoren til Arduinoen som illustreret på billedet nedenfor:
![alt text](https://github.com/DDlabAU/INFRARED-Kommunikation/blob/master/F3RGAAZH1YOHOOM.MEDIUM.gif)

Derefter upload koden til din Arduino. Den findes i github mappen til dette Repository. Giv eventuelt koden et kort kig, så du er med på hvordan den virker. 

Nu skulle PIR-Sensoren i princippet fungere! Hvis sensoren registrerer bevægelse sender den et HIGH signal til *PIN 2* i Arduinoen. I koden skal du så bare bruge et *IF-Statement* til at arbejde videre med det.

Hvis du oplever problemer med sensoren kan det være du skal prøve at indstille den anderledes.

## Indstilling af PIR-Sensorer
For at indstille PIR-Sensoren skal du bruge de to skruer på siden af sensoren. Den ene bruges til at justere sensitiviteten, den anden bruges til at justere Time delayet. 

**Sensitiviteten** bedømmer hvor sensitiv sensoren er i hvor lang afstand. Vores sensorer burde kunne registrerer bevægelse fra ca. 3 meter og op til ca. 7 meters afstand, men det kan variere fra sensor til sensor.

**Time Delayet** bedømmer hvor lang tid PIR-sensoren skal "måle" på passiv infrarødt lys. Dette varierer fra 3 sekunder til 5 minutter. 
Hvis delayet er skruet op på 5 minutter betyder det reelt set at sensoren måler bevægelse hvert 5 minut, da den bruger 5 minutter på at måle lyset i rummet. I langt de fleste tilfælde skal sensoren være skruet helt ned på 3 sekunders delay.

På nogle af vores sensorer er der markeret hvilken ende er er minimum og hvilken der er maksimum. Ellers kan du på følgende billede se hvordan du skal dreje skruen for at indstille sensoren. 

![alt text](https://github.com/DDlabAU/INFRARED-Kommunikation/blob/master/PIR.PNG)




[Tilbage](README.md)
