#include <stdio.h>
#include <string.h>

void ngenyek();
void logicNgenyek();

int main() {

	ngenyek();
    logicNgenyek();
    
    return 0;
}

void ngenyek() {
    printf("=============================NGENYEK BOT============================\n");
    printf(",,,,,,,,@@@#               (@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&@@@@@@,,,,,\n");
    printf(",,,,,,@*,,,             ........,@@@@@@@@@@@@@&&&&&&&&&&&&@@@@@@%%,,,,\n");
    printf(",,,,,(*,,,          ...................#@@@@@@&&&&&&&&&&&&@@@@@@@,,,,\n");
    printf(",,,,(**,,..............................@@@@@@@@&&&&&&&&&&&@@@@@@@,,,,\n");
    printf(",,,*(*,,...............................&@@@@@@@&&&&&&&&&&@@@@@@@@,,,,\n");
    printf(",,,(**,,.,,,,,,,,,,,,,,,,,,,...........(@@@@@@@@&&&&&&&&&@@@@@@@@,,,,\n");
    printf(",,,/,,,,,,,,,,,,,,,,,.................. @@@@@@@@@&&&&&@&&@@@@@&@@,,,,\n");
    printf(",,,*,,,,,,,,,,,,........................@@@@@@@@@&&&&&@&&@@@@&&@@,,,,\n");
    printf(",,,,,,,,................................ @@@@@@@@&&&&@@&&&@@@&&@&,,,,\n");
    printf(",,,,,,,,,,................................@@@@@@@&&@@@@&&&&@@&&@,,,,,\n");
    printf(",,*,,,,,,,,,............................... @@@@@@@@@@&&&&@@&&@@,,,,,\n");
    printf(",,*,,,,,,,,,,.................................@@@@@@@@&&&&@@@@@/,,,,,\n");
    printf(",,@@@(,,,,,,,...........    ...................,@@@@@@&&&&@@@@@,,,,,,\n");
    printf(",,,,..%%%%#(/,,......./(###%%%%&&&@@%%................(@@@@&&&@@@#...,,,,,\n");
    printf(",,,,.....,*,,,.....,/**.........,,..............,**@@&,,,,...**...,,,\n");
    printf(",,,,,....,**/,.....,*((.,,,,,,,,,,,..............**@@,,,...**.,**..,,\n");
    printf(",,,*/@@@@@@&//....,*//(,*. .....,/@(***,.........**@&,,..,*,*,,,,..,,\n");
    printf(",,,,,*,...*,,/.. ..,,,,.*(%%&%%(,,................,,,@.,..**,,,,,,,..,,\n");
    printf(",,,,........,..   .,,,,,,**,....,,..............,,.....**,.,,,,,,..,,\n");
    printf(",,,.........,..   ,,,,,,  ......................,,.....*,.,,,..,..,,,\n");
    printf(",,,........,...   ,,,,,,      ........................,...,,,....,,,,\n");
    printf(",,,.......*,..........((,      ......................,,,,.....,,,,,,,\n");
    printf(",,,......*,*.........,,**,,   ............................   ,,,,,,,,\n");
    printf(",,,,.....,,*/*,*//(%%*/*,,,.......................*****......  ,,,,,,,\n");
    printf(",,,,....,..,,,****,,,,,,,,......................*****........  .,,,,,\n");
    printf(",,,,....,../##(#(((...,,,,,.....................***..........     ,,,\n");
    printf(",.......,*.@@@@@@@@@%/.,,,,....................***...........   ,,.\n");
    printf("........,*,........,((//(*,...................**...............,,,.\n");
    printf(".......,..,*********/,   .*,...............#%%**..............*,,...\n");
    printf("*.....,,,..................,,,,,........*%%%%%%*...............(,,......\n");
    printf(",...,,,,,,,...........................###%%%%*..............((,,.......\n");
    printf(",..,,,,,,,,,*.....................*######%%/...............(,,......*(\n");
    printf(",.,,,,,,,,****................*#########**................,,..,,,./(/\n");
    printf(",,**************,.........,###(((((((((**/................,.,,,,,((**\n");
    printf("=============================NGENYEK BOT============================\n\n");
}

void logicNgenyek() {
    bool flag = true;
    while(true) {
        printf("Masukkan kata: ");
        char kata[1001], choice;
        scanf("%[^\n]", kata);
        getchar();
        int len = strlen(kata);
        for(int i=0; i<len; i++) {
            if(kata[i] == 'a' || kata[i] == 'u' || kata[i] == 'e' || kata[i] == 'o') {
                kata[i] = 'i';
            } else if(kata[i] == 'A' || kata[i] == 'U' || kata[i] == 'E' || kata[i] == 'O') {
                kata[i] = 'I';
            }
        }
        printf("%s\n", kata);
        printf("Apakah anda ingin mencoba lagi? [y/n]: ");
        scanf("%c", &choice);
        getchar();
		if(choice == 'y' || choice == 'Y') {
            flag = false;
        }
    }
}
