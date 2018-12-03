# INFRARED-Kommunikation
Dette repository beskriver hvordan man kan sende og modtage signaler ved hjælp af en Infrarød LED. Derudover beskrives der hvorledes man kan afkode signalet fra en fjernbetjening der bruger Infrarød.


## Ting du skal bruge:

1x IR Sensor

1x IR-LED **ELLER** 1x IR-Remote

Derudover skal du bruge Arduinolibrariet: *IRremote*. Det kan findes fra Arduinos editor og er lavet af *Shirriff*.


### IR-Sending & IR-Recieving

Hvis du bare skal modtage og sende et Infrarødt signal, og det er ligemeget hvad der står i signalet så skal du bruge IR-Sending og IR-Recieving programmerne. 

IR-Sending sender et konstant NEC-formateret signal, 10 gange i sekundet.

IR-Recieving modtager alle former for infrarøde signaler og poster dem i Serialmonitoren. Du kan også bruge dette program til at modtage signaler fra eventuelle IR-Fjernbetjeninger.


### IR-Remote

IR-Remote programmet bruges til at afkode signaler fra en IR-Fjernbetjening, gemme dem, og derefter sende det ud igen. Du kan bruge dette program til at afkode hvilke typer Infrarød forskellige fjenbetjeninger sender ud.


### Lidt om Infrarød

Infrarød fungerer ved at en LED blinker på en frekvens på 38 kHz, hurtigere end øjet kan opfange. Disse blink bliver oversat til binary og kan indeholde data. 

Alt

![alt text](https://github.com/DDlabAU/INFRARED-Kommunikation/blob/master/Arduino-IR-Remote-Receiver-Tutorial-IR-Signal-Modulation.png)


