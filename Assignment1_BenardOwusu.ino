void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);

    //Create some variables of different types
    int myAge = 18;
    float myHeight = 1.75;
    String myName = "Benard Owusu";
    bool isStudent = true;
    float gpa = 3.5;

    //Print them to the Serial Monitor 
    Serial.print("My name is: ");
    Serial.println("Benard Owusu");

    Serial.print("My age is: ");
    Serial.println("18");

    Serial.print("My height is: ");
    Serial.print("1.65");
    Serial.println(" meters ");


    Serial.print("Am I a student? ");
    Serial.println("1");

    Serial.print("MY GPA is: ");
    Serial.println(" 3.5");
}

void loop() {
  // put your main code here, to run repeatedly:

}
