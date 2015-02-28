// SparkDryer ********/
//********************/
//********************/
// Justin Lewsader ***/
//********************/
//********************/

// Declare variables and #defines and such
#define vibPin A0
#define weightPin A1
#define doorPin D0

// Base Variables
int door;
int vibration;
int checkWeight;
int baseWeight = /* TBD */;

// Functions
int vibCheck;
int weightCheck;


// Startup function
void setup()
{
	pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(D0, INPUT);

    int door = 0

    // Spark variable, function, event?
}

// Loop function 
void loop()
{
	// Door opens
    if (digitalRead(doorPin) == LOW){
        door++;
    }
    // Door closes after being opened (checked by 'door' variable set to 1 above)
    else if (digitalRead(doorPin) == HIGH && door > 0){
    	door = 0;
    	weightCheck();
    }

    if (weightCheck == 1) // Loaded
    {
        delay(180000); // 3 min delay
        vibCheck();
    }
    else return // Stop if not loaded

    if (vibCheck == 1)
    {
        // loop vib check every 5 min
    }
    else
    {
        // Alert 
    }
}

// Weight check function, returns 1 or 0
int weightCheck(){
    checkWeight = analogRead(weightPin);
    if (checkWeight > baseWeight)
    {
        return 1;
    }
    else return 0;
}

// Vibration check function, returns 1 or 0
int vibCheck(){
    vibration = analogRead(vibPin);
    if (vibration > 0) // Threshhold TBD
    {
        return 1
    }
    else return 0
}
