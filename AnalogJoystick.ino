
#define Xjoy A0 //a variable for analog pin A0
#define Yjoy A1 //a variable for analog pin A1
int delaytime =1000;


void setup() {
 
Serial.begin(9600); // serial monitor baud rate 

}

void loop() {
 //reads the analog pins 
float xvalue = analogRead(Xjoy);
float yvalue =analogRead(Yjoy);

//prints the values to the serial monitor 
Serial.print(xvalue);//prints the x-axis values 
Serial.print("\t"); // prints tab
Serial.println(yvalue);//prints the Y-axis values 
delay(delaytime);

}
