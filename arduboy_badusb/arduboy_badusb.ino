#include <Arduboy2.h>
#include "Keyboard.h"
#define   kbd_es_es
#include "FingerprintUSBHost.h"
#include "payloads_windows.h"
#include "payloads_linux.h"
#include "payloads_macos.h"
#include "passwords.h"
#include "payloads_android.h"

String user;
String pass;
String password;
String os;

Arduboy2 arduboy;

// Iniciamos el menu de opciones
const char option_init_menu0[] PROGMEM = "BadUSB";
const char option_init_menu1[] PROGMEM = "Detect OS";
const char option_init_menu2[] PROGMEM = "Password Manager";

// Array menu
const char * const options_init_menu[] PROGMEM =
{
  option_init_menu0,
  option_init_menu1,
  option_init_menu2,

};

// BadUSB OS menu
const char option_hid_menu0[] PROGMEM = "Windows";
const char option_hid_menu1[] PROGMEM = "Linux";
const char option_hid_menu2[] PROGMEM = "MacOS";
const char option_hid_menu3[] PROGMEM = "Android";


// Array BadUSB 
const char * const options_hid_menu[] PROGMEM =
{
  option_hid_menu0,
  option_hid_menu1,
  option_hid_menu2,
  option_hid_menu3,
};

// Payloads Windows
const char option_windows_menu0[] PROGMEM = "Scanner";
const char option_windows_menu1[] PROGMEM = "ReverseShell";
const char option_windows_menu2[] PROGMEM = "No Defenses";
const char option_windows_menu3[] PROGMEM = "Mimikatz passwd";
const char option_windows_menu4[] PROGMEM = "Steal Directory";


// Arry payloads Windows 
const char * const options_windows_menu[] PROGMEM =
{
  option_windows_menu0,
  option_windows_menu1,
  option_windows_menu2,
  option_windows_menu3,
  option_windows_menu4,
};

// Payloads Linux
const char option_linux_menu0[] PROGMEM = "Hello World";
const char option_linux_menu1[] PROGMEM = "Reverse Shell";

// Arry payloads Linux 
const char * const options_linux_menu[] PROGMEM =
{
  option_linux_menu0,
  option_linux_menu1,
};

// Payloads MacOS X
const char option_macos_menu0[] PROGMEM = "PasswordlessSSH";
const char option_macos_menu1[] PROGMEM = "Sudo for Everyone";
const char option_macos_menu2[] PROGMEM = "File Execution";

// Arry payloads MacOS X 
const char * const options_macos_menu[] PROGMEM =
{
  option_macos_menu0,
  option_macos_menu1,
  option_macos_menu2,
};

// Payloads Android
const char option_android_menu0[] PROGMEM = "Passcode Bypass";

// Arry payloads Android 
const char * const options_android_menu[] PROGMEM =
{
  option_android_menu0,
};


// Menu Gestor de contraseñas
const char option_manager_menu0[] PROGMEM = "Twitter Password";
const char option_manager_menu1[] PROGMEM = "Kali Session";
const char option_manager_menu2[] PROGMEM = "Google Account";
const char option_manager_menu3[] PROGMEM = "Outlook email";

// Array menu gestor de contraseñas
const char * const options_manager_menu[] PROGMEM =
{
  option_manager_menu0,
  option_manager_menu1,
  option_manager_menu2,
  option_manager_menu3,
};

// Medimos tamaño de los arrays para controlar el contenido
const uint8_t optionCount = sizeof(options_init_menu) / sizeof(options_init_menu[0]);
const uint8_t optionCount_hid = sizeof(options_hid_menu) / sizeof(options_hid_menu[0]);
const uint8_t optionCount_windows = sizeof(options_windows_menu) / sizeof(options_windows_menu[0]);
const uint8_t optionCount_linux = sizeof(options_linux_menu) / sizeof(options_linux_menu[0]);
const uint8_t optionCount_macos = sizeof(options_macos_menu) / sizeof(options_macos_menu[0]);
const uint8_t optionCount_android = sizeof(options_android_menu) / sizeof(options_android_menu[0]);
const uint8_t optionCount_manager = sizeof(options_manager_menu) / sizeof(options_manager_menu[0]);

const __FlashStringHelper * FlashString(const char * string)
{
  return reinterpret_cast<const __FlashStringHelper *>(string);
}

// Almacenamos el valor de la opcion seleccionada
uint8_t maxIndex = optionCount - 1;
uint8_t selectedIndex;

uint8_t mode = 0;
uint8_t optionMenuCount = optionCount;

// Funcion para introducir las contraseñas en el box
void setpassword() {
  Keyboard.print(user);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print(pass);
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
}

void setup(void)
{
  arduboy.begin();
  Serial.begin(9600);
  welcome_screen();  
  enterpin();
}

void loop(void)
{
  // Don't run until the next frame is ready
  if(!arduboy.nextFrame())
    return;

  // Update buttons so 'justPressed' works
  arduboy.pollButtons();

  // Configurar botones
  if(arduboy.justPressed(UP_BUTTON))
  {
    if(selectedIndex > 0)
      --selectedIndex;
  }

  if(arduboy.justPressed(DOWN_BUTTON))
  {
    if(selectedIndex < maxIndex){
      ++selectedIndex;
  }
}

  // Seleccion de opciones
  if(arduboy.justPressed(B_BUTTON)){
    
    if(selectedIndex == 0 & mode == 5) {
      user = user1;
      pass = password1;
      setpassword();
    }
    else if(selectedIndex == 1 & mode == 5) {
      user = user2;
      pass = password2;
      setpassword();
    }
    else if(selectedIndex == 2 & mode == 5) {
      user = user3;
      pass = password3;
      setpassword();
    }
    else if(selectedIndex == 3 & mode == 5) {
      user = user4;
      pass = password4;
      setpassword();
    }
    else if(selectedIndex == 0 & mode == 4) {
      PasswordlessSSH();
    }
    else if(selectedIndex == 1 & mode == 4) {
      EasySudo();
    }
    else if(selectedIndex == 2 & mode == 4) {
      Command();
    }
    else if(selectedIndex == 1 & mode == 3) {
      BasicReverseShell();
    }
    else if(selectedIndex == 0 & mode == 3) {
      HelloWorld_Gnome();
    }
    else if(selectedIndex == 1 & mode == 2) {
      ReverseShell();
    }
    else if(selectedIndex == 0 & mode == 2) {
      Scanner();
    }
    else if(selectedIndex == 2 & mode == 2) {
      Firewall();
    }
    else if(selectedIndex == 3 & mode == 2) {
      Mimikatz_ftp();
    }
    else if(selectedIndex == 4 & mode == 2) {
      DirectoryGrabber();
    }

    else if(selectedIndex == 0 & mode == 1) {
      mode = 2;
      optionMenuCount = optionCount_windows;
      
      maxIndex = optionMenuCount - 1;

    }
    else if(selectedIndex == 1 & mode == 1) {
      mode = 3;
      optionMenuCount = optionCount_linux;
      
      maxIndex = optionMenuCount - 1;

    }
    else if(selectedIndex == 2 & mode == 1) {
      mode = 4;
      optionMenuCount = optionCount_macos;
      
      maxIndex = optionMenuCount - 1;

    }
    else if(selectedIndex == 3 & mode == 1) {
      mode = 4;
      optionMenuCount = optionCount_android;
      
      maxIndex = optionMenuCount - 1;

    }
    else if(selectedIndex == 2 & mode == 0) {
      mode = 5;
      optionMenuCount = optionCount_manager;
      
      maxIndex = optionMenuCount - 1;
    }
     else if(selectedIndex == 1 & mode == 0) 
    {
      FingerprintUSBHost.guessHostOS(os);
      Serial.println(os);
      arduboy.clear();
  
      // Set cursor position
      arduboy.setCursor(0, 0);

      arduboy.println(os);

      arduboy.display();

      delay(5000);
       
      maxIndex = optionMenuCount - 1;
      loop();
          
    }
    else if(selectedIndex == 0 & mode == 0)
    {
      mode = 1;
      optionMenuCount = optionCount_hid;

      maxIndex = optionMenuCount - 1;
    }
  }

  // Boton para retroceder a la pantalla anterior  
  if(arduboy.justPressed(A_BUTTON))
  {  
    mode = 0;
    optionMenuCount = optionCount;
    
    maxIndex = optionMenuCount - 1;   
  }

  // Clear screen buffer
  arduboy.clear();

  // Set cursor position
  arduboy.setCursor(0, 0);

  // Loop para todas las opciones
  for(uint8_t i = 0; i < optionMenuCount; ++i)
  {
    // Colocar flecha en la opcion que se ha seleccionado
    if(i == selectedIndex)
    {
      arduboy.print(F("> "));
    }
    else
    {
      arduboy.print(F("  "));
    }
  
   if(mode == 0)
     arduboy.println(FlashString(pgm_read_word(&options_init_menu[i])));
   else if(mode == 1)
     arduboy.println(FlashString(pgm_read_word(&options_hid_menu[i])));
   else if(mode == 2)
     arduboy.println(FlashString(pgm_read_word(&options_windows_menu[i])));
   else if(mode == 3)
     arduboy.println(FlashString(pgm_read_word(&options_linux_menu[i])));
   else if(mode == 4)
     arduboy.println(FlashString(pgm_read_word(&options_macos_menu[i]))); 
   else if(mode == 5)
     arduboy.println(FlashString(pgm_read_word(&options_manager_menu[i]))); 
  }

   // Update screen with buffer contents
   arduboy.display();
}

// Pantalla de bienvenida
void welcome_screen(void){
  // Clear screen buffer
  arduboy.clear();
  
  // Set cursor position
  arduboy.setCursor(0, 0);

  arduboy.println(F("Happy ArduHacking"));
  arduboy.println(F("--------------------"));
  arduboy.println(F("By HugoRD"));
  
  arduboy.display();
  
  delay(3000);
}

// Contraseña para acceder al ArduHacking
void enterpin(void){  
  // Clear screen buffer
  arduboy.clear();
  
  // Set cursor position
  arduboy.setCursor(0, 0);

  arduboy.println(F("Enter pin:"));

  arduboy.display();
  
  while(1){
    arduboy.pollButtons();
    
    if(arduboy.justPressed(UP_BUTTON))
    {
      password = password + "A";
      arduboy.print(F("*"));
    }
    
    else if(arduboy.justPressed(DOWN_BUTTON))
    {
      password = password + "B";
      arduboy.print(F("*"));
    }

    else if(arduboy.justPressed(LEFT_BUTTON))
    {
      password = password + "C";
      arduboy.print(F("*"));
    }

    else if(arduboy.justPressed(RIGHT_BUTTON))
    {
      password = password + "D";
      arduboy.print(F("*"));
    }
    
    else if(arduboy.justPressed(A_BUTTON))
    {
      arduboy.clear();

      if(password != "DACB"){
        arduboy.clear();
        arduboy.println("Pin incorrect");
        arduboy.display();
        delay(2000);
        password = "";
        enterpin();
      }

      if(password == "DACB"){
        return;
      }
    }  
    arduboy.display();  
  }
}
