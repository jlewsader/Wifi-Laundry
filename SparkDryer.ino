// SparkDryer ********/
//********************/
//********************/
// Justin Lewsader ***/
//********************/
//********************/

// Declare variables and #defines and such
#define vibPin A0
#define weightPin A1
#define doorPin 'D0'

// Base Variables
int val = 0;
int door;
int vibration;
int checkWeight;
int baseWeight = 0; // TBD

// Functions
//int vibCheck;
//int weightCheck;


// Startup function
void setup()
{
    pinMode(vibPin, INPUT);
    pinMode(weightPin, INPUT);
    pinMode(doorPin, INPUT_PULLUP);

    int door = 0;

    // Spark variable, function, event?
}

// Loop function 
void loop() {
	// Door opens
    val = digitalRead(doorPin);
    if (val == LOW){
        door++;
    }
    // Door closes after being opened (checked by 'door' variable set to 1 above)
    else if (val == HIGH && door > 0){
    	door = 0;
    	weightCheck();
    }

    while(weightCheck > 0){
        delay(180000); // 3 min delay
        vibCheck();
        if(vibCheck == 0){
            // No-Start Alert
            delay(60000);
            weightCheck();
        }
        while(vibCheck > 0){
            delay(500);
            vibCheck();
        }
        // Done Alert
        return;
    }
    return;
}

// Weight check function, returns 1 or 0
int weightCheck() {
    checkWeight = analogRead(weightPin);
    if (checkWeight > baseWeight)
    {
        return 1;
    }
    else return 0;
}

// Vibration check function, returns 1 or 0
int vibCheck() {
    vibration = analogRead(vibPin);
    if (vibration > 0) // Threshhold TBD
    {
        return 1;
    }
    else return 0;
}
