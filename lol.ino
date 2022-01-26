// Variablen, die die Hertz-Angabe für die Töne speichern
int noteC1 = 262;
int noteD1 = 294;
int noteE1 = 330;
int noteG1 = 392;
int noteA1 = 440;
int noteH1 = 493;
int noteC2 = 523;
int noteD2 = 587;
int noteE2 = 659;
int noteF2 = 698;
int noteG2 = 784;
int noteA2 = 880;

void setup () {
    pinMode(6,OUTPUT); // LED1; Pin 6 als output deklariert
    pinMode(7,OUTPUT); // LED2; Pin 7 als output deklariert
    pinMode(8,OUTPUT); // LED3; Pin 8 als output deklariert
    pinMode(9,OUTPUT); // Buzzer; Pin 9 als output deklariert
    pinMode(10,OUTPUT); // LED4; Pin 10 als output deklariert
    pinMode(11,OUTPUT); // LED5; Pin 11 als output deklariert
}

// Unterprogramm, um Takte zu speichern, die sich wiederholen
void derZweiteTeil() {
tone(9,noteG2,100);
delay(100);
tone(9,740,100);
delay(150);
tone(9,noteF2,100);
delay(150);
tone(9,622,150);
delay(300);

tone(9,noteE2,150);
delay(300);
tone(9,415,100);
delay(150);
tone(9,noteA1,100);
delay(150);

tone(9,noteC2,100);
delay(300);
tone(9,noteA1,100);
delay(150);
tone(9,noteC2,100);
delay(100);
tone(9,noteD2,100);
delay(220);

tone(9,500,100);
delay(300);

tone(9,noteG2,100);
delay(100);
tone(9,740,100);
delay(150);
tone(9,noteF2,100);
delay(150);
tone(9,622,150);
delay(300);

tone(9,noteE2,200);
delay(300);

tone(9,1047,80);
delay(300);
tone(9,1047,80);
delay(150);
tone(9,1047,80);
delay(300);

tone(9,380,100);
delay(300);
tone(9,500,100);
delay(300);

tone(9,noteG2,100);
delay(100);
tone(9,740,100);
delay(150);
tone(9,noteF2,100);
delay(150);
tone(9,622,150);
delay(300);

tone(9,noteE2,150);
delay(300);
tone(9,415,100);
delay(150);
tone(9,noteA1,100);
delay(150);

tone(9,noteC2,100);
delay(300);
tone(9,noteA1,100);
delay(150);
tone(9,noteC2,100);
delay(100);
tone(9,noteD2,100);
delay(420);

tone(9,622,100);
delay(450);

tone(9,noteD2,100);
delay(420);

tone(9,noteC2,100);
delay(360);
}
// Unterprogramm, um Takte zu speichern, die sich wiederholen
void derErsteTeil() {
tone(9,noteC2,100);
delay(450);
tone(9,noteG1,100);
delay(400);
tone(9,noteE1,100);
delay(500);
tone(9,noteA1,100);
delay(300);
tone(9,noteH1,80);
delay(330);
tone(9,466,100);
delay(150);
tone(9,noteA1,100);
delay(300);
tone(9,noteG1,100);
delay(200);
tone(9,noteE2,80);
delay(200);
tone(9,noteG2,50);
delay(150);
tone(9,noteA2,100);
delay(300);
tone(9,noteF2,80);
delay(150);
tone(9,noteG2,50);
delay(350);
tone(9,noteE2,80);
delay(300);
tone(9,noteC2,80);
delay(150);
tone(9,noteD2,80);
delay(150);
tone(9,noteH1,80);
delay(500);
}
void loop () {
led1an();
led2an();
led3an();
led4an();
led5an();
led6an();
tone(9,noteE2,100);
delay(150);
tone(9,noteE2,100);
delay(300);
tone(9,noteE2,100);
delay(300);
tone(9,noteC2,100);
delay(100);
tone(9,noteE2,100);
delay(300);
tone(9,noteG2,100);
delay(550);
tone(9,noteG1,100);
delay(575);


derErsteTeil();
derErsteTeil();


tone(9,500,100);
delay(300);

derZweiteTeil();

tone(9,380,100);
delay(300);
tone(9,500,100);
delay(300);
tone(9,500,100);
delay(150);
tone(9,500,100);
delay(300);

tone(9,500,100);
delay(300);

derZweiteTeil();

tone(9,380,100);
delay(300);
tone(9,500,100);
delay(300);
tone(9,500,100);
delay(150);
tone(9,500,100);
delay(300);

tone(9,noteC2,60);
delay(150);
tone(9,noteC2,80);
delay(300);
tone(9,noteC2,60);
delay(350);
tone(9,noteC2,80);
delay(150);
tone(9,noteD2,80);
delay(350);
tone(9,noteE2,80);
delay(150);
tone(9,noteC2,80);
delay(300);
tone(9,noteA1,80);
delay(150);
tone(9,noteG1,80);
delay(600);

tone(9,noteC2,60);
delay(150);
tone(9,noteC2,80);
delay(300);
tone(9,noteC2,60);
delay(350);
tone(9,noteC2,80);
delay(150);
tone(9,noteD2,80);
delay(150);
tone(9,noteE2,80);
delay(550);

tone(9,870,80);
delay(325);
tone(9,760,80);
delay(600);

tone(9,noteC2,60);
delay(150);
tone(9,noteC2,80);
delay(300);
tone(9,noteC2,60);
delay(350);
tone(9,noteC2,80);
delay(150);
tone(9,noteD2,80);
delay(350);
tone(9,noteE2,80);
delay(150);
tone(9,noteC2,80);
delay(300);
tone(9,noteA1,80);
delay(150);
tone(9,noteG1,80);
delay(600);


}

// Unterprogramme, um Zeit zu sparen beim einschalten der LED's
void led1an() {
    digitalWrite(6,HIGH); // auf pin 6 wird auf high gesetzt
}
void led2an() {
    digitalWrite(7,HIGH); // LED2
}
void led3an() {
    digitalWrite(8,HIGH); // LED3
}

void led4an() {
    digitalWrite(10,HIGH);
}
 void led5an() {
    digitalWrite(11,HIGH); // LED5
}

// Unterprogramme, um Zeit zu sparen beim ausschalten der LED's

void led1aus() {
    digitalWrite(6,LOW);  // pin 6 wird auf low gesetzt
}
void led2aus() {
    digitalWrite(7,LOW); // LED2
}
void led3aus() {
    digitalWrite(8,LOW); // LED3
}

void led4aus() {
    digitalWrite(10,LOW);
}

void led5aus() {
    digitalWrite(11,LOW);
}