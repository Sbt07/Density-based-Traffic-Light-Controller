// Define pins for traffic light sets
int set1_red = 2;
int set1_yellow = 3;
int set1_green = 4;
int set2_red = 5;
int set2_yellow = 6;
int set2_green = 7;
int set3_red = 8;
int set3_yellow = 9;
int set3_green = 10;

// Define delay times for traffic light changes
int green_time = 4000;
int yellow_time = 500;
int red_time = 3000;

void setup() {
  // Initialize traffic light set pins as output
  pinMode(set1_red, OUTPUT);
  pinMode(set1_yellow, OUTPUT);
  pinMode(set1_green, OUTPUT);
  pinMode(set2_red, OUTPUT);
  pinMode(set2_yellow, OUTPUT);
  pinMode(set2_green, OUTPUT);
  pinMode(set3_red, OUTPUT);
  pinMode(set3_yellow, OUTPUT);
  pinMode(set3_green, OUTPUT);
  
  // Set initial traffic light states
  digitalWrite(set1_red, HIGH);
  digitalWrite(set2_red, HIGH);
  digitalWrite(set3_red, HIGH);
  
  // Seed the random number generator
  randomSeed(analogRead(0));
}

void loop() {
  // Generate random traffic density values
  float density1 = random(0, 100) / 100.0;
  float density2 = random(0, 100) / 100.0;
  float density3 = random(0, 100) / 100.0;
  
  // Determine which set of traffic lights should be green based on density
  if (density1 > density2 && density1 > density3) {
    // Set traffic light set 1 to green
    digitalWrite(set1_red, LOW);
    digitalWrite(set1_yellow, LOW);
    digitalWrite(set1_green, HIGH);
    
    // Set other traffic light sets to red
    digitalWrite(set2_red, HIGH);
    digitalWrite(set2_yellow, LOW);
    digitalWrite(set2_green, LOW);
    digitalWrite(set3_red, HIGH);
    digitalWrite(set3_yellow, LOW);
    digitalWrite(set3_green, LOW);
    
    // Delay for green time
    delay(green_time);
    
    // Set traffic light set 1 to yellow
    digitalWrite(set1_red, LOW);
    digitalWrite(set1_yellow, HIGH);
    digitalWrite(set1_green, LOW);
    
    // Delay for yellow time
    delay(yellow_time);
  } else if (density2 > density1 && density2 > density3) {
    // Set traffic light set 2 to green
    digitalWrite(set2_red, LOW);
    digitalWrite(set2_yellow, LOW);
    digitalWrite(set2_green, HIGH);
    
    // Set other traffic light sets to red
    digitalWrite(set1_red, HIGH);
    digitalWrite(set1_yellow, LOW);
    digitalWrite(set1_green, LOW);
    digitalWrite(set3_red, HIGH);
    digitalWrite(set3_yellow, LOW);
    digitalWrite(set3_green, LOW);
    
    // Delay for green time
    delay(green_time);
    
    // Set traffic light set 2 to yellow
    digitalWrite(set2_red, LOW);
    digitalWrite(set2_yellow, HIGH);
    digitalWrite(set2_green, LOW);
    
    // Delay for yellow time
    delay(yellow_time);
  } else {
    // Set traffic light set 3 to green
    digitalWrite(set3_red, LOW);
    digitalWrite(set3_yellow, LOW);
    digitalWrite(set3_green, HIGH);
    
    // Set other traffic light sets to red
    digitalWrite(set1_red, HIGH);
    digitalWrite(set1_yellow, LOW);
    digitalWrite(set1_green, LOW);
    digitalWrite(set2_red, HIGH);
    digitalWrite(set2_yellow, LOW);
    digitalWrite(set2_green, LOW);
    // Delay for green time
    delay(green_time);

    // Set traffic light set 3 to yellow
    digitalWrite(set3_red, LOW);
    digitalWrite(set3_yellow, HIGH);
    digitalWrite(set3_green, LOW);

    // Delay for yellow time
    delay(yellow_time);
    // Set all traffic light sets to red
    digitalWrite(set1_red, HIGH);
    digitalWrite(set1_yellow, LOW);
    digitalWrite(set1_green, LOW);
    digitalWrite(set2_red, HIGH);
    digitalWrite(set2_yellow, LOW);
    digitalWrite(set2_green, LOW);
    digitalWrite(set3_red, HIGH);
    digitalWrite(set3_yellow, LOW);
    digitalWrite(set3_green, LOW);

    // Delay for red time
    delay(red_time);
  }
  }

