f1::
send System.out.println("");
return

f2::
send import java.util.*;{enter}
send public class {{}{enter}
send {tab}public static void main(String args[]){{}{enter}
send Scanner sc=new Scanner(System.in);
return
f3::
send insert into values(); {enter}
return
f4::
send public void set  (String ){{}{enter}
return

F5::
{
    Send, +{Enter}
    Loop, read, D:\test.txt
    {   
        temp = %A_LoopReadLine%
        SendRaw, %temp%
        Send, +{Enter}
		Sleep 10
    }
}
Return
