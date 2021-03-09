#define STRICT		// für verbesserte Typsicherheit
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

const char szWitz[] = "\"Ich steh' schwer auf Umweltschutz\", sagt Peter.\n"
                       "\"Ich werfe zum Beispiel alte U-Bahn-Fahrscheine nie weg,\n"
                        "sondern benutze sie mehrmals.\"";


/*int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    int iAntwort = MessageBoxA(NULL, szWitz, "Ha, ha, ha, ha...", MB_ICONINFORMATION | MB_OKCANCEL | MB_DEFBUTTON1);
    if (iAntwort == IDOK)
    {
        MessageBoxA(NULL, "Ja, ich finde den Witz auch ok...", "Sie haben auf Ok gedrückt", MB_ICONINFORMATION | MB_OK | MB_DEFBUTTON1);
    }
    else if (IDCANCEL == iAntwort)
    {
        MessageBoxA(NULL, "Ja, warum haben sie denn auf Abbrechen gedrückt?\n"
            "Hat ihnen der Witz etwa nicht gefallen?",
            "Sie haben auf Abbrechen gedrückt",
            MB_ICONINFORMATION | MB_OK | MB_DEFBUTTON1);
    }
    return 0;
}*/


                                                         // === Übung 1 ===
/*int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    int i = 0;
    for (i; i <= 4; i++)
    {
        MessageBoxA(NULL, "Windows wird deinstalliert...", "SYSTEMFEHLER", MB_ICONERROR | MB_OK);
        i++;
    }

    MessageBoxA(NULL, "SPASS", "Das war nur ein Scherz :D", MB_ICONINFORMATION | MB_OK);
    return 0;
}*/

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
    int rc = 0;
    int yes = 0;
    int no = 0;

    std::string text;



    while (rc != IDCANCEL) 
    {
        text = "Ja: " + to_string(yes) + " Nein: " + to_string(no);
        rc = MessageBoxA(NULL, text.c_str(), "Ja, Nein Zähler", MB_ICONINFORMATION | MB_YESNOCANCEL);

        if (rc == IDNO) {
            no++;
        }
        else if (rc == IDYES) {
            yes++;
        }

    }

    return 0;
}