//This is included in the original Aruino download
#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
//create an LCD object
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
  //our LCD has 16 columns and 2 rows!
lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
  //tell it where to put the cursor
  lcd.setCursor(0,0);
  // lcd.print("Hello World");
  lcd.print("Watch me Count");

  // delay(1000);
  //lcd.setCursor(column, row) Now we have two lines!

  // lcd.print("My name is John");
  // delay(1000);
  // lcd.clear();
  for (int j=1; j<=10; j=j+1){
    lcd.setCursor(0,1);
    lcd.print(j);
    //clearing the display is important so you don't leave up something
    delay(500);
    //clear must come last!
    
  }
  //when the body of code above finishes, then we clear! 
  lcd.clear();
}
