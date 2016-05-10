int brightness = 5;    // how bright the LED is, start at half brightness
int fadeAmount = 1;    // how many points to fade the LED by

const int pin_A = 6;  
const int pin_B = 7;  
const int LED_Pin = 3;

unsigned char encoder_A;
unsigned char encoder_B;
unsigned char encoder_A_prev=0;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(57600);                
  pinMode(pin_A, INPUT);
  pinMode(pin_B, INPUT);
  pinMode(LED_Pin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    encoder_A = digitalRead(pin_A);    // Read encoder pins
    encoder_B = digitalRead(pin_B);   
    if((!encoder_A) && (encoder_A_prev)){
      // A has gone from high to low 
      if(encoder_B) {
        Serial.println("Clockwise");
        // B is high so clockwise
        // increase the brightness, dont go over 255
        if(brightness + fadeAmount <= 9) brightness += fadeAmount;               
      }   
      else {
        Serial.println("Counter Clockwise");
        // B is low so counter-clockwise      
        // decrease the brightness, dont go below 0
        if(brightness - fadeAmount >= 0) brightness -= fadeAmount;               
      }   
}
encoder_A_prev = encoder_A; 
analogWrite(LED_Pin, brightness*25);
delay(1);
}




