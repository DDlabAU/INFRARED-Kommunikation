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


### [TILBAGE](README.md)
