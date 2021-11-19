#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <mouse.h>
#include "DINO.h"

void main (void){
    FILE *f;
    int gdriver = DETECT, gmode,click=0,tecla=0;
    f=fopen("C:\\TC20\\FICHEROS\\Ayuda.txt","r");
	initgraph(&gdriver,&gmode, "C:\\TC20\\BIN");
    inicio:
    Escritorio();
    do{
        click=0;
        mver();
        /*Si presiona el icono del juego que empiece a jugar*/
        if(minlimit(1,12,82,48,118)==1 && mclick()==1) {
            click=1;
		}
        /*Si toca windows se abre pantalla*/
        if(minlimit(1,10,455,30,475)==1 && mclick()==1){
            click=2;
        }
        /*Si toca el chrome*/
        if(minlimit(1,12,0,48,46)==1 && mclick()==1){
            click=3;
        }
    }while(click!=1 && click!=2 && click!=3);
    mocultar();
    switch(click){
        case 1:menu: click=0;
            ventana();
            menu();
            dinosaurio_menu();
            nube2();
            nube3();
            nube5();
            do{
                mver();
                /*Hace click en presentacion*/
                if(minlimit(1,275,285,400,315)==1 && mclick()==1){
                    click=1;
                }
                if(minlimit(1,275,325,400,355)==1 && mclick()==1){
                    click = 2;
                }
                /*Hace click en la barra puntaje*/
                if(minlimit(1,275,365,400,395)==1 && mclick()==1){
                    click=3;
                }
                /*Hace click en la barra salir*/
                if(minlimit(1,275,405,400,430)==1 && mclick()==1){
                    click=4;
                }
                /*Hace click en la x*/
                if(minlimit(1,600,0,630,26)==1 && mclick()==1){
                    click=5;
                }
                if(minlimit(1,490,405,510,430)==1 && mclick()==1){
                    click=6;
                }
            } while (click!=1 && click!=2 && click!=3 && click!=4 && click!=5 && click!=6);
            mocultar();
            switch(click){
                case 1:
                    cleardevice();
                    ventana();
                    setfillstyle(1,BLACK);
                    bar(14,41,629,469);
                    escena();
                    presentacion();
                    cactus2();
                    do
                    {
                        mver();
                    } while (mclick()!=1);
                    mocultar();
                    cleardevice();
                    goto menu;
                /*
                    presentacion();
                    do
                    {
                        mver();
                    } while (mclick()!=1);
                    mocultar();
                    cleardevice();
                    goto menu;*/
                break;
                case 2:
                    dino();
                    goto menu;
                break;
                case 3:
                    cleardevice();
                    setbkcolor(7);
                    fichero_puntaje();
                    do{
                        tecla=getch();
                    }while(tecla!=32);
                    mocultar();
                    setbkcolor(9);
                    cleardevice();
                    goto menu;
                break;
                case 4:
                    mocultar();
                    cleardevice();
                    goto inicio;
                break;
                case 5:
                    mocultar();
                    cleardevice();
                    goto inicio;
                break;
                case 6:
                cleardevice();
                setbkcolor(7);
                    fichero_Ayuda();
                    do{
                        mver();
                    }while(mclick()!=1);
                    mocultar();
                    setbkcolor(9);
                    cleardevice();
                    goto menu;
                break;
            }
        break;
        case 2:
        click=0;
            opciones_desplazado();
            do
            {
                mver();
                if(minlimit(1,10,455,30,475)==1 && mclick()==1){
                    click=1;
                }
                if(minlimit(1,10,410,30,450)==1 && mclick()==1){
                    click=2;
                }
            } while (click!=1 && click!=2);
            mocultar();
            
            switch(click){
                case 1:
                    cleardevice();
                    goto inicio;
                break;
                case 2:
                    goto final;
                break;
            }
            
        break;
        case 3:click=0;
            cleardevice();
            chrome();
            do
            {
                mver();
                if(minlimit(1,616,1,638,19)==1 && mclick()==1){
                    click=1;
                }
            } while (click!=1);
            mocultar();
            cleardevice();
            goto inicio;
        break;
    }
    final:
    closegraph();
    return 0;

}