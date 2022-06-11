//  JEJESAR
//  Exam Q2

#include <stdio.h>
#include <stdlib.h>
#include <myconio.h>

#define R 82
#define V 86
#define B 66

int main()
{
    int i;

    // CREATION DU TABLEAU CLASSEMENT
    int resultats[18]= {R,B,R,V,V,B,R,V,B,V,R,V,R,B,V,B,B,R};;

    // PAGE D'ACCUEIL
    puts("\n\n\tPROGRAMME DE CLASSEMENTS");
    puts("\n\tFait par J\x82rome SARTIAUX");
    puts("\n\n\n\nAppuiez sur une touche pour continuer...");
    getch();
    clrscr();

    // AFFICHAGE DU CLASSEMENT
    puts("\n  Classement des sportifs (avec leur \x82quipe) :\n");

    // CHANGEMENT DE COULEUR DU TEXTE
    textcolor(BLACK);
    textbackground(LIGHTRED);

    puts("\n\xDA\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xBF");
    printf("\xB3");
    for(i=0; i<18; i++)
        printf(" %-2c \xB3",resultats[i]);
    puts("\n\xC3\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xB4");
    printf("\xB3");
    for(i=0; i<18; i++)
        printf(" %-2d \xB3", i+1);
    puts("\n\xC0\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xD9");

    puts("\n\n");

    _sleep(500);

    textcolor(WHITE);
    textbackground(BLACK);

    // AFFICHAGE PAR EQUIPE
    puts("  Classement par \x82quipe :\n");

    textcolor(BLACK);
    textbackground(LIGHTRED);

    puts("\xDA\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xBF");
    puts("\xB3 R  \xB3 V  \xB3 B  \xB3");
    puts("\xC3\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xB4");
    int yR=18,yV=18,yB=18;

    // POINTS DES EQUIPES
    // [EQUIPE 1] | [EQUIPE 2] | [EQUIPE 3]
    // [POINTS 1] | [POINTS 2] | [POINTS 3]
    int pts[3][2]={R,0,V,0,B,0};
    int count[3]={0};

    for(i=1; i<19; i++)
    {
        // TRIAGE EN FONCTION DES EQUIPES
        switch(resultats[i-1])
        {
        case R:
            if(count[0]<4)
            {
                count[0]++;
                pts[0][1] += i;
            }
            gotoxy(1,yR++);
            printf("\xB3 %-2d \xB3", i);
            break;
        case V:
            if(count[1]<4)
            {
                count[1]++;
                pts[1][1] += i;
            }
            gotoxy(7,yV++);
            printf(" %-2d \xB3", i);
            break;
        case B:
            if(count[2]<4)
            {
                count[2]++;
                pts[2][1] += i;
            }
            gotoxy(12,yB++);
            printf(" %-2d \xB3", i);
            break;
        }
    }
    puts("\n\xC0\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xD9");

    textcolor(WHITE);
    textbackground(BLACK);

    // TRI PAR ORDRE DECROISSANT DES POINTS DES EQUIPES
    puts("\n\n");
    int countSort=0;
    for(i=0;i<2;i++)
    {
        int temp;
        if(pts[i][1]>pts[i+1][1])
        {
            temp = pts[i][1];
            pts[i][1] = pts[i+1][1];
            pts[i+1][1] = temp;

            temp = pts[i][0];
            pts[i][0] = pts[i+1][0];
            pts[i+1][0] = temp;
        }
        else
        {
            countSort++;
        }
        if(countSort != 2)
            i=0;
    }

    _sleep(500);

    // AFFICHAGE CLASSEMENT DES EQUIPES
    puts("  Classement des \x82quipes :\n");

    textcolor(BLACK);
    textbackground(LIGHTRED);
    puts("\xDA\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xBF");

    for(i=0;i<3;i++)
        printf("\xB3 %d \xB3 Equipe %c \xB3 %3d \xB3\n",i+1,pts[i][0],pts[i][1]);

    puts("\xC0\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xD9");

    textcolor(WHITE);
    textbackground(BLACK);

    puts("\n");
    system("pause");
    return 0;
}
