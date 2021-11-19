#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <time.h>

void Escritorio (void)
{
	int gdriver = DETECT, gmode;
	initgraph(&gdriver,&gmode, "C:\\TC20\\Kirs");
	/*para ell escritorio*/

	setbkcolor(9);/*para que el fondo sea celestito bonito uwu*/

	setfillstyle(SOLID_FILL, 1); /*relleno de la barra inferior*/
	bar(0, 450, 639, 479);

	/*cuadradito de windows*/
	setfillstyle(SOLID_FILL,15);
	bar(10,455, 18,463);
	bar(21,455,30,463);
	bar(10,467,18,475);
	bar(21,467,30,475);

	setfillstyle(SOLID_FILL, 7); /*relleno de la barra de busqueda*/
	bar(43, 450, 220, 479);
	rectangle(43,450,220,479);
	setcolor(BLACK);
	line(49,470,55,463);
	/*esto es para hacer una lupa*/
	circle(58,460,5);

	/*aca van los iconitos del escritorio*/

	/*icono de google*/

	circle(30,25,20);/* primer circulo*/
	setcolor(RED);
	setfillstyle(SOLID_FILL, RED);
	pieslice(30, 24, 20, 167, 20);
	setcolor(GREEN);
	setfillstyle(SOLID_FILL, GREEN);
	pieslice(30, 24, 167, 280, 20);
	setcolor(RED);
	setfillstyle(SOLID_FILL, RED);
	pieslice(12, 19,309,360, 20);

	setcolor(GREEN);
	setfillstyle(SOLID_FILL, GREEN);
	pieslice(30, 24, 200, 240, 20); /*Que wueba*/


	setcolor(YELLOW);
	setfillstyle(SOLID_FILL, YELLOW);
	pieslice(30, 24, 18, 0, 20);
	pieslice(30, 24, 280, 360, 20);
	putpixel(32, 44, YELLOW);
	setcolor(GREEN);
	setfillstyle(SOLID_FILL, GREEN);
	pieslice(42, 24, 200, 240, 20);
	setcolor(BLACK);
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL, YELLOW);
	pieslice(25, 29, 18, 0, 20);
	/*line(38,32,30,44);linea inferior*/
	setcolor(15);
	circle(30,25,10); /*segundo circulo*/
	setfillstyle(SOLID_FILL, 15);
	floodfill(31, 26, 15);

	setcolor(9);
	circle(30,25,8); /*tercer circulo*/
	setfillstyle(SOLID_FILL, 9);
	floodfill(31, 25, 9);

	/*icono de Adobe ilustrator*/
	rectangle(10,80,50,120);
	setfillstyle(SOLID_FILL,6);
	bar(10,80,50,120);
	rectangle(12,82,48,118);




	/*todo el texto que va aparecer*/
	setcolor(0);
	settextstyle(3,0,2);
	outtextxy(70,450, "Buscar");
	setcolor(15);
	settextstyle(0,0,1);
	outtextxy(10,50,"CHROME");
	outtextxy(15,125, "DINO");
	outtextxy(15,135,"GAME");
	settextstyle(0,0,3);
	outtextxy(20,90,"D");
	settextstyle(1,0,2);
	outtextxy(180,400,"SOMOS ORGULLOSAMENTE UNI");

	/*LOGUITO PARA LA UNI*/
	setfillstyle(SOLID_FILL,1);
	bar(100,80,160,300);/*primer pilar de la izquierda*/
	bar(100,300,350,350);/*parte inferior de la media U*/
	bar(280,180,350,300);/*parte superior de la media U*/
	bar(180,80,430,150);/*parte superior del la pieza rara*/
	bar(180,150,250,280);/*parte que cuelga de la pieza rara*/
	bar(370,80,440,300);/*pilar de la pieza rara*/
	bar(370,300,550,350);/*parte inferior de la pieza rara*/
	bar(470,180,550,300);/*pilar de la I*/
	bar(470,80,550,150);/*puntito de la i*/
	
}
void opciones_desplazado(void)
{
	/*recuadro del menu desplazado*/
	setfillstyle(1,3);
	bar(0,50,130,449);
	/*recuadro del menu clarito*/
	setfillstyle(1,11);
	bar(130,50,350,449);
	setcolor(15);
	/*botoncito de inicio*/
	setfillstyle(1,15);
	outtextxy(40,53, "Inicio");
	bar(10,60,25,61);
	bar(10,65,25,66);
	bar(10,70,25,71);
	/*boton de apagado*/
	arc(20,435,110,70,10);
	line(20,430,20,423);
	/*usuario*/
	circle(20,315,10);
	/*documentos*/
	rectangle(10,350,30,370);
	line(27,350,27,353);
	line(27,353,30,353);
	/*imagenes*/
	rectangle(10,390,30,410);
	line(10,405,20,400);
	line(20,400,28,410);
	line(25,405,30,400);
	line(25,390,26,390);
	setcolor(11);
	line(0,415,150,415);
	line(0,449,150,449);
	line(0,380,150,380);
	line(0,340,150,340);
	line(0,295,150,295);
	setcolor(15);
	settextstyle(2,0,5);
	outtextxy(40,390,"imagenes");
	outtextxy(35,350,"documentos");
	outtextxy(43,307,"usuario");
	outtextxy(40,423,"apagar");
	/*disque app*/
	setfillstyle(1,5);
	bar(160,70,230,140);
	bar(160,300,230,350);
	setfillstyle(1,1);
	bar(250,170,330,270);
	setfillstyle(1,2);
	bar(240,70,340,140);
	bar(250,300,330,350);
	setfillstyle(1,6);
	bar(160,380,340,440);
}
void chrome(void)
{
	setbkcolor(7);/*color de fondo principal*/
	setfillstyle(1,1);
	bar(0,0,640,30);/*barra azul*/
	setfillstyle(1,8);
	bar(10,0,120,30);
	bar(0,30,640,70);
	setfillstyle(1,7);
	bar(100,40,640,60);
	outtextxy(45,15,"los jojos");
	outtextxy(10,45,"<-  ->  0");
	settextstyle(3,0,6);
	outtextxy(230,200,"GOOGLE");
	rectangle(560,0,639,20);/*seccion de botones*/
	line(590,0,590,20);
	line(615,0,615,20); /*separacion ente el boton de cancelar y maximizar*/
	setfillstyle(1,RED);
	bar(616,1,638,19);/*relleno rojo del boton del x*/
	settextstyle(0,0,0);
	outtextxy(625,5,"x");
	outtextxy(570,5,"-");
	rectangle(20,8,40,25);/*icono de la pagina web*/
	setfillstyle(1,15);
	bar(170,270,500,290);
	rectangle(595,8,605,10);

}
void ventana (void)
{
	settextstyle(0,0,1);
	setcolor(15);
	setfillstyle(SOLID_FILL, 1);
	bar(0, 0, 639, 479);
	rectangle(0,0,639,479);/*Cuadro que abarca toda la pantalla*/
	rectangle(11,41, 629,469);/* marco para el juego y la ventana*/
	setcolor(8);
	line(12,42,12,468);
	line(13,42,13,468);
	setcolor(15);
	rectangle(9,9,36,33);/*icono*/
	setfillstyle(SOLID_FILL,6);
	bar(10,10,35,32);
	outtextxy(20,17,"D"); /* nombre del programa*/
	setcolor(15);
	rectangle(539,0,570,26);/*cuadro de minimizar*/
	setfillstyle(SOLID_FILL,1);
	bar(540,1,569,25);
	rectangle(571,0,600,26);/*cuadro de maximizar*/
	setfillstyle(SOLID_FILL,1);
	bar(572,1,599,25);
	setcolor(15);
	rectangle(600,0,630,26);/*cuadro de salir*/
	setfillstyle(SOLID_FILL,4);
	bar(601,1,629,25);
	setcolor(15);
	rectangle(580,11,590,17);/*2do marco del maximizar*/
	rectangle(578,9,592,19);/*1er marco del maximizar*/
	outtextxy(45, 15,"DINOGAME"); /* nombre del programa*/
	outtextxy(553,10,"-");/*iconito de minimizar*/
	outtextxy(612,10, "x");/*iconito de salir*/
	
}
void menu (void)
{
       /*dimensión para todo el juego*/
    	setfillstyle(SOLID_FILL,BLACK);
    	bar(14,41,629,469);
	setcolor(8);
	arc(300,100,270,90,25);
	arc(295,100,270,90,25);
	/*diseno del logo del menu*/
	setcolor(6);
    	settextstyle(0,0,6);
	outtextxy(200,160, "DINO");
    	setcolor(14);
    	settextstyle(0,0,6);
	outtextxy(320,210, "GAME");
	/*textura del logo*/
	setcolor(BLACK);
	setfillstyle(SOLID_FILL,15);
	/*d*/
	bar(197,159,228,157);
	bar(197,160,199,200);
	bar(229,164,235,165);
	bar(235,170,240,171);

	/*i*/
	bar(254,166,259,167);
	bar(258,167,259,195);
	bar(252,196,253,200);
	bar(252,195,259,195);
	/*n*/
	bar(293,160,295,200);
	bar(293,158,305,159);
	/*o*/
	bar(342,166,343,195);
	bar(342,165,348,165);
	bar(349,165,349,160);
	bar(349,160,379,159);
	/*game*/
	setfillstyle(SOLID_FILL,BLACK);
	/*g*/
	bar(317,215,320,245);
	bar(317,212,324,215);
	bar(317,246,324,249);
	bar(322,247,325,252);
	bar(322,210,325,215);
	bar(350,235,353,245);
	bar(344,233,353,235);
	/*a*/
	bar(365,220,368,252);
	bar(365,218,373,221);
	bar(370,221,373,215);
	bar(373,215,379,212);
	bar(377,210,379,212);
	bar(395,240,398,252);
	bar(395,233,398,222);
	bar(392,222,398,220);
	/*m*/
	bar(414,210,417,252);
	bar(443,228,446,252);
	bar(440,227,446,229);
	/*e*/
	bar(462,210,465,252);
	/*diseño del arbol*/
	setfillstyle(1,6);
	bar(580,300,605,355);
	setfillstyle(9,2);
	bar(550,300,629,250);
	/*diseno del pasto*/
	setfillstyle(SOLID_FILL,14);
	bar(14,447,629,469);
	bar(14,356,148,468);
	bar(526,356,629,467);
	setfillstyle(SOLID_FILL,6);
	bar(14,355,148,358);
	bar(526,355,629,358);
	setfillstyle(SOLID_FILL,7);
	bar(150,280,520,440);/*cuadro de opciones*/
	setfillstyle(SOLID_FILL,8); /*borde del cuadro de opciones*/
	bar(150,276,520,279); /*borde superior*/
	bar(150,441,520,445); /*borde inferior*/
	bar(145,276,149,445); /*borde izquierdo*/
	bar(521,276,525,445); /*borde derecho*/
	/*profundidad del cuadro*/
	setcolor(15);
	line(150,280,520,280);
	line(150,280,150,439);
	line(520,280,520,439);
	line(150,439,520,439);
	/*remarcado de los bordes en gris claro*/
	setcolor(7);
	line(150,280,146,276);/*izquierdo superior*/
	line(150,441,146,445);/*izquierdo inferior*/
	line(521,279,524,276);/*derecho superior*/
	line(521,441,525,445);/*derecho inferior*/
	/*profundidad en negro*/
	setcolor(BLACK);
	line(146,275,525,275);
	line(146,446,525,446);
	/*cuadros de opciones*/
	setfillstyle(SOLID_FILL,6);
	bar(275,285,400,315);/*cuadro de presentación*/
	setfillstyle(SOLID_FILL,6);
	bar(275,325,400,355);/*cuadro de empezar*/
	setfillstyle(SOLID_FILL,6);
	bar(275,365,400,395);/*cuadro de puntajes*/
	setfillstyle(SOLID_FILL,6);
	bar(275,405,400,430);/*cuadro de salir*/
	setfillstyle(1,14);
	setcolor(14);
	circle(490,420,15);/*circulo de ayuda*/
	floodfill(490,420,14);
	settextstyle(0,0,2);
	setcolor(BLACK);
	outtextxy(485,415,"?");
	circle(490,420,15);
	circle(490,420,12);
	/*decoraci[on de los cuadros*/
	setcolor(15);
	/*botón presentación*/
	line(274,285,400,285);/*superior*/
	line(274,315,400,315);/*inferior*/
	line(274,285,274,315);/*derecha*/
	line(400,285,400,315);
	line(280,290,395,290);
	line(280,310,395,310);
	line(280,290,280,310);/*izq*/
	line(395,290,395,310);/*derecha*/
	line(274, 285,280,290);
	line(275,315,280,310);
	line(395,290,400,285);
	line(395,310,400,315);
	/*boton de empezar*/
	line(274,325,400,325);/*superior*/
	line(274,355,400,355);/*inferior*/
	line(274,325,274,355);/*derecha*/
	line(400,325,400,355);
	line(280,330,395,330);
	line(280,350,395,350);
	line(280,330,280,350);
	line(395,330,395,350);
	line(274, 325,280,330);
	line(275,355,280,350);
	line(395,330,400,325);
	line(395,350,400,355);
	/*boton de puntajes*/
	/*275,365,400,395*/
	line(274,365,400,365);/*superior*/
	line(274,395,400,395);/*inferior*/
	line(274,365,274,395);/*derecha*/
	line(400,365,400,395);
	line(280,370,395,370);
	line(280,390,395,390);
	line(280,370,280,390);
	line(395,370,395,390);
	line(274,365,280,370);
	line(275,395,280,390);
	line(400,365,395,370);
	line(400,395,395,390);
	/*botón de salir*/
	line(274,405,400,405);/*superior*/
	line(275,430,400,430);/*inferior*/
	line(274,405,274,430);/*izquierda*/
	line(400,405,400,430);/*derecha*/
	/*segundo cuadro*/
	line(280,410,395,410);/*S*/
	line(280,425,395,425); /*I*/
	line(280,410,280,425); /*IZQ*/
	line(395,410,395,425);/*DER*/
	/*uniones*/
	line(274,405,280,410);/*izquierda superior*/
	line(275,430,280,425);/*izq. inf*/
	line(400,405,395,410);/*derecha sup*/
	line(400,430,395,425);/*derecha inf*/
	/*texto del recuadro*/
	setcolor(15);
	settextstyle(0,0,1);
	outtextxy(290,295, "Presentacion");
	outtextxy(320,335,"Jugar");
	outtextxy(310,375,"Puntaje");
	outtextxy(320,415,"Salir");
	/*para las estrellas*/
	 putpixel(50,100,15);
	 putpixel(200,90,15);
	 putpixel(400,90,15);
	 putpixel(500,60,15);
	 putpixel(150,70,15);
	 putpixel(550,50,15);
	 putpixel(300,50,15);
}
void cactus1 (void)
{
	setfillstyle(SOLID_FILL,2);
	bar(445,399,459,320);;/*pilar*/
	bar(420,373,433,340);/*barra horizontal de la rama izquierda*/
	bar(420,377,445,365);/*barra vertical de la rama derecha*/
	bar(460,370,470,385);/*barra horizontal de la rama derecha*/
	bar(480,385,469,345);/*barra v. rama derecha*/
}
void cactus2(void)
{
	setfillstyle(SOLID_FILL,2);
	bar(445,399,459,320);
}
void escena(void)
{	
	setfillstyle(SOLID_FILL,14);
	bar(14,400,629,469);
	setfillstyle(SOLID_FILL,6);
	bar(14,399,629,402);
	/*para la luna*/
	setcolor(8);
	arc(300,100,270,90,25);
	arc(295,100,270,90,25);
}
void carretera(void)
{
	int carretera[6]= {14,434,356,469,14,469
	};
	setfillstyle(1,8);
	fillpoly(3,carretera);
	setcolor(7);
	line(14,433,356,468);
	setcolor(14);
	line(14,440,250,468);
}
void dino_pata_izquierda(void)
{
    int Dinosaurio[120] = {253, 314 ,221, 312 ,221, 317 ,218, 317 ,217, 343 ,214, 343 ,213, 348 ,209, 348 ,207, 351 ,202, 351
    ,201, 355 ,197, 355 ,197, 359 ,191, 359 ,190, 356 ,185, 355 ,185, 351 ,180, 351 ,180, 341 ,176, 341 ,177, 366 ,180, 366
    ,182, 372 ,185, 372 ,185, 375 ,190, 375 ,190, 377 ,192, 383 ,196, 383 ,198, 399 ,205, 398 ,205, 394 ,202, 395 ,202, 392
    ,209, 392 ,208, 388 ,211, 388 ,211, 383 ,217, 383 ,218, 388 ,227, 387 ,228, 384 ,222, 383 ,221, 376 ,226, 373 ,229, 368
    ,232, 368 ,234, 355 ,237, 355 ,237, 360 ,242, 360 ,243, 353,233, 351   ,234, 343   ,249, 344   ,250, 339
    ,237, 339   ,237, 334   ,256, 335   ,256, 317
    };
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(60,Dinosaurio);
    setfillstyle(SOLID_FILL,BLACK);
    bar(97,215,101,220);
}
void dino_pata_derecha(void)
{
	int Dinosaurio[122] = {  249, 315  ,217, 309  ,219, 319  ,213, 319  ,213, 343  ,209, 344  ,209, 348  ,203, 349  ,203, 352  ,197, 352 ,198, 356
	,193, 357,195, 360,185,359,184,356,180,355,181, 352,178, 352,177, 345,172, 344,172, 367,177, 367,177, 370,180, 370,181, 375,184,375
	,185, 380,189, 383,193,384,192,387,197,387,197, 392,204, 392,204, 387,201, 388,200, 382,208, 382,209, 387,213, 387,213, 399,220, 399
    	,221, 395 ,217, 395 ,220, 379 ,220, 379 ,220, 375 ,224, 375 ,224, 368 ,228,368 ,229,356 ,233,356 ,233,360 ,237, 360 ,235,352
    	,228, 351 ,227, 343 ,245, 344 ,244, 339,233, 339 ,233, 335 ,252, 333};
    	setfillstyle(SOLID_FILL,BLACK);
    	bar(102,227,106,232);
		setfillstyle(SOLID_FILL,WHITE);
    	fillpoly(61,Dinosaurio);
}
void nube2(void)
{
    int segundanube[48] = {273, 86,257, 85,256, 91,246, 91,244, 96,239, 97,239, 91,234, 91,233, 86
    ,217, 86,216, 92,205, 91,204, 97,199, 97,200, 104,205, 104,206, 108,279, 110,279, 104,284, 104
    ,283, 98,279, 97,278, 92,274, 92
    };
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(24,segundanube);
}
void nube3(void)
{
	int terceranube[34] = {378, 63,364, 64,363, 70,351, 70,351, 77,346, 77,346, 83
	,350, 83,351, 88,386, 89,386, 84,390, 84,391, 77,386, 77,386, 72,381, 71,381, 65
	};
	setfillstyle(SOLID_FILL,WHITE);
	fillpoly(17,terceranube);
}
void nube5(void)
{
    int quintanube[24] = {617, 53,601, 52,601, 58,590, 57,590, 64,584, 63
    ,584, 70,589, 70,589, 75,629, 75,630, 58,617, 58
    };
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(12,quintanube);
}
void presentacion(void)
{
        setcolor(15);
	setfillstyle(SOLID_FILL, 1);
        setfillstyle(SOLID_FILL,BLUE);
        bar(230,62,257,125);
        bar(230,109,329,125);
        bar(301,82,329,108);
        bar(266,77,294,103);
        bar(266,62,365,77);
        bar(337,77,365,125);
        bar(365,109,400,125);
        bar(372,82,400,109);
        bar(372,62,400,76);
	setfillstyle(SOLID_FILL, 15);
	rectangle(14,51,629,469);
	line(14,100,220,100);
	line(410,100,629,100);
	line(100,120,100,380);
	line(530,120,530,380);
	outtextxy(190,150,"UNIVERSIDAD NACIONAL DE INGENIERIA");
	outtextxy(170,170,"FACULTAD DE ELECTROTECNIA Y COMPUTACION");
	outtextxy(275,200,"Integrantes:");
	outtextxy(190,220,"Ortiz Duran Josue Danilo 2020 - 0255U");
	outtextxy(170,240, "Gonzalez Zeledon Juan Carlos 2020 - 0282U");
	outtextxy(160,260," Lopez Cardenas Kirsten Allison 2020 - 0289U");
	outtextxy(250,300, " Ing. Nelson Barrios");
	outtextxy(270,320," proyecto final");
	outtextxy(250,340,"ENTREGADO EL 25/11/2020");
}
void arcoiris(void)
{
	int x,y,i;
    	x = getmaxx()/2;
	y= 399;
	for(i=0; i<130; i++)
	{
	setcolor(i/5);
	arc(x,y,0,180,5+i);
	delay(15);
	}
	setcolor(15);;
}
void puntaje(void)
{
  	  /*dimensión para todo el juego*/
   	 setfillstyle(SOLID_FILL, 9);
    	bar(14,41,629,469);
	/*diseño del arbol*/
	setfillstyle(1,6);
	bar(580,300,605,355);
	setfillstyle(9,2);
	bar(550,300,629,250);
	/*diseno del pasto*/
	setfillstyle(SOLID_FILL,10);
	bar(14,447,629,469);
	bar(14,356,148,468);
	bar(526,356,629,467);
	setfillstyle(SOLID_FILL,2);
	bar(14,355,148,358);
	bar(526,355,629,358);
	setfillstyle(SOLID_FILL,7);
	bar(100,150,560,440);/*cuadro de opciones*/
	setfillstyle(SOLID_FILL,8); /*borde del cuadro de opciones*/
	bar(100,147,560,150); /*borde superior*/
	bar(100,441,560,445); /*borde inferior*/
	bar(97,147,100,445); /*borde izquierdo*/
	bar(557,147,560,445); /*borde derecho*/
	/*profundidad del cuadro*/
	setcolor(15);
	line(101,151,556,151);
	line(101,151,101,439);
	line(557,151,557,439);
	line(101,439,556,439);
	/*profundidad en negro*/
	setcolor(BLACK);
	line(98,146,560,146);
	line(98,446,560,446);
	setfillstyle(1,14);
	bar(110,410,200,430);/*boton de atras*/
	rectangle(109,409,201,431);
	outtextxy(120,418,"<- ATRAS");
	setcolor(15);
	settextstyle(0,0,4);
	outtextxy(240,100,"SCORES");
}
void game_over(void)
{
	setcolor(7);
	setfillstyle(1,7);
	bar3d(200,200,470,300,4,3);
	setfillstyle(1,14);
	setcolor(14);
	bar3d(210,260,290,290,4,3);/*boton de atras*/
	bar3d(350,260,440,290,4,3);/*boton de intentar*/
	setcolor(BLACK);
	outtextxy(220,275,"<- Atras");
	outtextxy(365,275,"Intentar");
	settextstyle(0,0,3);
	outtextxy(230,210,"GAME OVER");
}
void Dino_victoria(void)
{
    int Dinosaurio[136] = { 340, 312,308, 312,309, 316,304, 316,305, 342,300, 342,300, 346,295, 346
    ,295, 349 ,288, 349 ,288, 353 ,283, 353 ,283, 358 ,275, 357 ,274, 352 ,272, 352 ,272, 349 ,267, 348
    ,267, 340 ,265, 342 ,265, 365 ,268, 366 ,268, 370 ,272, 369 ,273, 374 ,277, 374 ,277, 377 ,281, 377
    ,281, 381 ,282, 380 ,284, 380 ,285, 399 ,292, 397 ,292, 393 ,287, 393 ,288, 389 ,292, 389 ,292, 385
    ,296, 385 ,296, 381 ,302, 381 ,301, 384 ,304, 384 ,304, 397 ,312, 397 ,313, 393 ,308, 393 ,307, 378
    ,313, 378 ,313, 373 ,316, 373 ,316, 367 ,320, 368 ,321, 354 ,325, 354 ,325, 358 ,329, 358 ,329, 349
    ,321, 349 ,321, 342  ,336, 341  ,336, 337  ,325, 337  ,325, 334  ,344, 334  ,344, 316  ,339, 314,341, 311
    };
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(68,Dinosaurio);
    setfillstyle(SOLID_FILL,BLACK);
    bar(316,317,313,321);
}
void lunita(void)
{
	setcolor(8);
	arc(300,100,270,90,25);
	arc(295,100,270,90,25);
}
void v(void)
{
    setfillstyle(SOLID_FILL, 9);
    bar(14,41,629,469);
	setfillstyle(SOLID_FILL,14);
	bar(14,400,629,469);
	setfillstyle(SOLID_FILL,6);
	bar(14,399,629,402);
    setcolor(15);
	settextstyle(0,0,5);
	outtextxy(190,100,"GANASTE");
}
void dinosaurio_menu(void)
{
int Dinosaurio[134] = {107, 266,74, 266,75, 268,71, 268,70, 294,67, 294,66, 300,59, 298,60, 302,54, 303,54, 307,50, 307,50, 311
,41, 310,41, 306,39, 307,39, 304,34, 302,35, 294,31, 294,30, 318,34, 318,34, 323,39, 322,38, 327
,42, 327,42, 330,46, 330,47, 334,51, 334,51, 350,59, 350,58, 346,54, 346,55, 342,59, 343,59, 339,63, 339,63, 335,65, 335,67, 338
,71, 338,71, 350,78, 350,78, 347,75, 347,75, 330,78, 330,79, 326,82, 326,82, 320,86, 320,86, 305,90, 307,90, 310,95, 310
,94, 303,87, 303,87, 294,102, 294,102, 290,91, 290,91, 287,110, 286,111, 269,107, 269,107, 267};
setfillstyle(SOLID_FILL,WHITE);
fillpoly(67,Dinosaurio);
setfillstyle(SOLID_FILL,BLACK);
bar(82,270,79,274);
}
void fichero_Ayuda (void)
{
    FILE *archivo;
	char caracter;
	clrscr();
    archivo = fopen("C:\\TC20\\FICHEROS\\Ayuda.txt","r");
    if (archivo == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
        {
        rewind(archivo);
        while((caracter = fgetc(archivo)) != EOF)
        {
            printf("%c",caracter);
        }
		fclose(archivo);
	}
}
void fichero_puntaje(void){
	FILE *archivo;
	char caracter;
	clrscr();
    archivo = fopen("C:\\TC20\\FICHEROS\\puntaje.txt","r");
    if (archivo == NULL)
    {
        printf("\nError de apertura del archivo. \n\n");
    }
    else
        {
        rewind(archivo);
        while((caracter = fgetc(archivo)) != EOF)
        {
            printf("%c",caracter);
        }
		fclose(archivo);
	}
}
int dino(){
    FILE *f;
    int gdriver = DETECT, gmode,x1cactus2=615,x2cactus2=629,i=2,j=0,x1=525,x2=545,tecla=0,aleatorio=0;
    int xcactus1[10]={594,608,569,582,569,594,609,619,629,618},ydino[4]={244,360,244,399},ycactus1[4]={569,360,569,399};
    int ycactus2[4]={614,360,614,399},ycactus3[4]={525,360,525,399},click=0,resta=14;
    int ejesdino[8]={257,335,244,360,229,385,205,399},puntaje=0;
    int Dinosaurio[120] = {253, 314 ,221, 312 ,221, 317 ,218, 317 ,217, 343 ,214, 343 ,213, 348 ,209, 348 ,207, 351 ,202, 351
    ,201, 355 ,197, 355 ,197, 359 ,191, 359 ,190, 356 ,185, 355 ,185, 351 ,180, 351 ,180, 341 ,176, 341 ,177, 366 ,180, 366
    ,182, 372 ,185, 372 ,185, 375 ,190, 375 ,190, 377 ,192, 383 ,196, 383 ,198, 399 ,205, 398 ,205, 394 ,202, 395 ,202, 392
    ,209, 392 ,208, 388 ,211, 388 ,211, 383 ,217, 383 ,218, 388 ,227, 387 ,228, 384 ,222, 383 ,221, 376 ,226, 373 ,229, 368
	,232, 368 ,234, 355 ,237, 355 ,237, 360 ,242, 360 ,243, 353,233, 351   ,234, 343   ,249, 344   ,250, 339
    ,237, 339   ,237, 334   ,256, 335   ,256, 317
    };
    char mensaje[5];
	initgraph(&gdriver,&gmode, "C:\\TC20\\BIN");
    juego:
    xcactus1[0]=594;xcactus1[1]=608;xcactus1[2]=569;xcactus1[3]=582;xcactus1[4]=569;
    xcactus1[5]=594;xcactus1[6]=609;xcactus1[7]=619;xcactus1[8]=629;xcactus1[9]=618;
    ycactus1[0]=569;ycactus1[1]=360;ycactus1[2]=569;ycactus1[3]=399;
    x1cactus2=615;x2cactus2=629;
    ycactus2[0]=614;ycactus2[1]=360;ycactus2[2]=614;ycactus2[3]=399;
    x1=525;x2=545;
    Dinosaurio[1]= 314; Dinosaurio[3]= 312 ;Dinosaurio[5]= 317;Dinosaurio[7]= 317;Dinosaurio[9]= 343;Dinosaurio[11]= 343;Dinosaurio[13]= 348;Dinosaurio[15]=348;Dinosaurio[17]=351;Dinosaurio[19]= 351;
    Dinosaurio[21]=355;Dinosaurio[23]=355;Dinosaurio[25]=359;Dinosaurio[27]=359;Dinosaurio[29]=356;Dinosaurio[31]=355;Dinosaurio[33]=351;Dinosaurio[35]=351;Dinosaurio[37]=341;Dinosaurio[39]=341;Dinosaurio[41]=366;Dinosaurio[43]=366;
    Dinosaurio[45]=372;Dinosaurio[47]=372;Dinosaurio[49]=375;Dinosaurio[51]=375;Dinosaurio[53]=377;Dinosaurio[55]=383;Dinosaurio[57]=383;Dinosaurio[59]=399;Dinosaurio[61]=398;Dinosaurio[63]=394;Dinosaurio[65]=395;Dinosaurio[67]=392;
    Dinosaurio[69]=392;Dinosaurio[71]=388;Dinosaurio[73]=388;Dinosaurio[75]=383;Dinosaurio[77]=383;Dinosaurio[79]=388;Dinosaurio[81]=387;Dinosaurio[83]=384;Dinosaurio[85]=383;Dinosaurio[87]=376;Dinosaurio[89]=373;Dinosaurio[91]=368;
	Dinosaurio[93]=368;Dinosaurio[95]=355;Dinosaurio[97]=355;Dinosaurio[99]=360;Dinosaurio[101]=360;Dinosaurio[103]=353;Dinosaurio[105]=351;Dinosaurio[107]=343;Dinosaurio[109]=344;Dinosaurio[111]=339;
    Dinosaurio[113]=339;Dinosaurio[115]=334;Dinosaurio[117]=335;Dinosaurio[119]=317;
    cleardevice();
    ventana();
    setfillstyle(SOLID_FILL,BLACK);
    bar(14,41,629,469);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(60,Dinosaurio);
    escena();
    carretera();
    aleatorio=1+rand()%(2-1+1);
    do{
        puntaje++;
        if(puntaje == 1000){
            goto victoria;
        }
        if(xcactus1[2]<=80){
            xcactus1[0]=594;xcactus1[1]=608;xcactus1[2]=569;xcactus1[3]=582;xcactus1[4]=569;
            xcactus1[5]=594;xcactus1[6]=609;xcactus1[7]=619;xcactus1[8]=629;xcactus1[9]=618;
            ycactus1[0]=569;ycactus1[1]=360;ycactus1[2]=569;ycactus1[3]=399;
            aleatorio=1+rand()%(3-1+1);
        }
        if(x1cactus2<=80){
            x1cactus2=615;x2cactus2=629;
            ycactus2[0]=614;ycactus2[1]=360;ycactus2[2]=614;ycactus2[3]=399;
            aleatorio=1+rand()%(3-1+1);
        }
        if(kbhit()){
            tecla=getch();
            if(puntaje <= 100){
                resta+=2;
            } else if (puntaje <= 300){
                resta+=2;
            } else if (puntaje <= 500){
                resta+=3;
            }
            if(tecla == 32){
                setfillstyle(SOLID_FILL,WHITE);
                fillpoly(60,Dinosaurio);
                for ( i = 0; i < 10; i++) {
                    for (j=0;j<120; j++) {
                        if((j+1) % 2 == 0) {
                            Dinosaurio[j]-=15;
                        }
                    }
                    puntaje++;
                    ejesdino[1]-=15;ejesdino[3]-=15;ejesdino[5]-=15;ejesdino[7]-=15;
                    if(xcactus1[2]<=50){
                        xcactus1[0]=594;xcactus1[1]=608;xcactus1[2]=569;xcactus1[3]=582;xcactus1[4]=569;xcactus1[5]=594;
                        xcactus1[6]=609;xcactus1[7]=619;xcactus1[8]=629;xcactus1[9]=618;
                        aleatorio=1+rand()%(3-1+1);
                    }
                    if(x1cactus2<=50){
                        x1cactus2=615;x2cactus2=629;
                        aleatorio=1+rand()%(3-1+1);
                    }
                if(aleatorio==1){
                    xcactus1[0]-=resta;xcactus1[1]-=resta;xcactus1[2]-=resta;xcactus1[3]-=resta;xcactus1[4]-=resta;
                    xcactus1[5]-=resta;xcactus1[6]-=resta;xcactus1[7]-=resta;xcactus1[8]-=resta;xcactus1[9]-=resta;
                    ycactus1[0]-=resta;ycactus1[1]-=resta;ycactus1[2]-=resta;ycactus1[3]-=resta;
                    
                    if(xcactus1[2]<=ejesdino[0] && ejesdino[1]>=320 ||
                    xcactus1[2]<=ejesdino[2] && ejesdino[3]>=320 ||
                    xcactus1[2]<=ejesdino[4] && ejesdino[5]>=320 ||
                    xcactus1[2]<=ejesdino[6] && ejesdino[7]>=320){
                        setfillstyle(SOLID_FILL,BLACK);
                        bar(14,41,629,399);
						sprintf(mensaje,"%d",puntaje);
                        outtextxy(600,60, mensaje);
                        setfillstyle(SOLID_FILL,WHITE);
                        fillpoly(60,Dinosaurio);
                        setfillstyle(SOLID_FILL,2);
                        bar(xcactus1[0],399,xcactus1[1],320);/*pilar*/
                        bar(xcactus1[2],373,xcactus1[3],340);/*barra vertical de la rama izquierda*/
                        bar(xcactus1[4],377,xcactus1[5],365);/*barra horizantal de la rama izquierda*/
                        bar(xcactus1[6],370,xcactus1[7],385);/*barra horizontal de la rama derecha*/
                        bar(xcactus1[8],385,xcactus1[9],345);/*barra v. rama derecha*/
                        goto salir;
                    }
                    setfillstyle(SOLID_FILL,BLACK);
                    bar(14,41,629,399);
                    delay(100);
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(60,Dinosaurio);
                        setfillstyle(SOLID_FILL,2);
                        bar(xcactus1[0],399,xcactus1[1],320);/*pilar*/
                        bar(xcactus1[2],373,xcactus1[3],340);/*barra vertical de la rama izquierda*/
                        bar(xcactus1[4],377,xcactus1[5],365);/*barra horizantal de la rama izquierda*/
                        bar(xcactus1[6],370,xcactus1[7],385);/*barra horizontal de la rama derecha*/
                        bar(xcactus1[8],385,xcactus1[9],345);/*barra v. rama derecha*/
                }else{
                    x1cactus2-=14;x2cactus2-=14;
                    if(x1cactus2<=ejesdino[0] && ejesdino[1]>=320||
                    x1cactus2<=ejesdino[2] && ejesdino[3]>=320 ||
                    x1cactus2<=ejesdino[4] && ejesdino[5]>=320 ||
                    x1cactus2<=ejesdino[6] && ejesdino[7]>=320 ){
                        setfillstyle(SOLID_FILL,BLACK);
                        bar(14,41,629,399);
						sprintf(mensaje,"%d",puntaje);
                        outtextxy(600,60, mensaje);
                        setfillstyle(SOLID_FILL,WHITE);
                        fillpoly(60,Dinosaurio);
                        setfillstyle(SOLID_FILL,2);
                        bar(x1cactus2,399,x2cactus2,320);
                        goto salir;
                    }
                    setfillstyle(SOLID_FILL,BLACK);
                    bar(14,41,629,399);
                    delay(100);
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(60,Dinosaurio);
                    ycactus2[0]-=resta;ycactus2[1]-=resta;ycactus2[2]-=resta;ycactus2[3]-=resta;
                        setfillstyle(SOLID_FILL,2);
                        bar(x1cactus2,399,x2cactus2,320);
                }
                }
                for ( i = 0; i < 10; i++) {
                    for (j=0;j<120; j++) {
                        if((j+1) % 2 == 0) {
                            Dinosaurio[j]+=15;
                        }
                    }
                    puntaje++;
                    ejesdino[1]+=15;ejesdino[3]+=15;ejesdino[5]+=15;ejesdino[7]+=15;
                    if(xcactus1[2]<=80){
                        xcactus1[0]=594;xcactus1[1]=608;xcactus1[2]=569;xcactus1[3]=582;xcactus1[4]=569;xcactus1[5]=594;
                        xcactus1[6]=609;xcactus1[7]=619;xcactus1[8]=629;xcactus1[9]=618;
                        aleatorio=1+rand()%(3-1+1);
                    }
                    if(x1cactus2<=80){
                        x1cactus2=615;x2cactus2=629;
                        aleatorio=1+rand()%(3-1+1);
                    }
                    
                if(aleatorio==1){
                    xcactus1[0]-=resta;xcactus1[1]-=resta;xcactus1[2]-=resta;xcactus1[3]-=resta;xcactus1[4]-=resta;
                    xcactus1[5]-=resta;xcactus1[6]-=resta;xcactus1[7]-=resta;xcactus1[8]-=resta;xcactus1[9]-=resta;
                    ycactus3[0]-=resta;ycactus3[1]-=resta;ycactus3[2]-=resta;ycactus3[3]-=resta;
                    if(xcactus1[2]<=ejesdino[0] && ejesdino[1]>=320||
                    xcactus1[2]<=ejesdino[2] && ejesdino[3]>=320 ||
                    xcactus1[2]<=ejesdino[4] && ejesdino[5]>=320 ||
                    xcactus1[2]<=ejesdino[6] && ejesdino[7]>=320 ){
                        if(xcactus1[2] >= 205){
                            setfillstyle(SOLID_FILL,BLACK);
                            bar(14,41,629,399);
                            setfillstyle(SOLID_FILL,WHITE);
                            fillpoly(60,Dinosaurio);
                            setfillstyle(SOLID_FILL,2);
                            bar(xcactus1[0],399,xcactus1[1],320);/*pilar*/
                            bar(xcactus1[2],373,xcactus1[3],340);/*barra vertical de la rama izquierda*/
                            bar(xcactus1[4],377,xcactus1[5],365);/*barra horizantal de la rama izquierda*/
                            bar(xcactus1[6],370,xcactus1[7],385);/*barra horizontal de la rama derecha*/
                            bar(xcactus1[8],385,xcactus1[9],345);/*barra v. rama derecha*/
                            goto salir;
                        }
                    }
                    setfillstyle(SOLID_FILL,BLACK);
                    bar(14,41,629,399);
                    delay(100);
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(60,Dinosaurio);
                        setfillstyle(SOLID_FILL,2);
                        bar(xcactus1[0],399,xcactus1[1],320);/*pilar*/
                        bar(xcactus1[2],373,xcactus1[3],340);/*barra vertical de la rama izquierda*/
                        bar(xcactus1[4],377,xcactus1[5],365);/*barra horizantal de la rama izquierda*/
                        bar(xcactus1[6],370,xcactus1[7],385);/*barra horizontal de la rama derecha*/
                        bar(xcactus1[8],385,xcactus1[9],345);/*barra v. rama derecha*/
                }else{
                    if(x1cactus2<=257 && ejesdino[1]>=320||
                    x1cactus2<=244 && ejesdino[3]>=320 ||
                    x1cactus2<=229 && ejesdino[5]>=320 ||
                    x1cactus2<=205 && ejesdino[7]>=320 ){
                        if(x1cactus2 >=205 ){
                            setfillstyle(SOLID_FILL,BLACK);
                        bar(14,41,629,399);
						sprintf(mensaje,"%d",puntaje);
                        outtextxy(600,60, mensaje);
                        setfillstyle(SOLID_FILL,WHITE);
                        fillpoly(60,Dinosaurio);
                        setfillstyle(SOLID_FILL,2);
                        bar(x1cactus2,399,x2cactus2,320);
                        goto salir;
                        }
                    }
                    setfillstyle(SOLID_FILL,BLACK);
                    bar(14,41,629,399);
                    sprintf(mensaje,"%d",puntaje);
            outtextxy(600,60, mensaje);
                    delay(100);
                    setfillstyle(SOLID_FILL,WHITE);
                    fillpoly(60,Dinosaurio);
                    x1cactus2-=resta;x2cactus2-=resta;
                    ycactus2[0]-=resta;ycactus2[1]-=resta;ycactus2[2]-=resta;ycactus2[3]-=resta;
                        setfillstyle(SOLID_FILL,2);
                        bar(x1cactus2,399,x2cactus2,320);
                }
                }
                setfillstyle(SOLID_FILL,WHITE);
                fillpoly(60,Dinosaurio);
            }else if(tecla == 27){
                return 0;
            }
            } else {
                puntaje++;
                if(aleatorio==1){
                        for (i = 0; i < 10; i++)
                        {
                            xcactus1[i]-=resta;
                        }
                    ycactus1[0]-=resta;ycactus1[2]-=resta;
                    if(ycactus1[0] <= 257 && ycactus1[0] >= 205){
                        setfillstyle(SOLID_FILL,2);
                        bar(xcactus1[0],399,xcactus1[1],320);/*pilar*/
                        bar(xcactus1[2],373,xcactus1[3],340);/*barra vertical de la rama izquierda*/
                        bar(xcactus1[4],377,xcactus1[5],365);/*barra horizantal de la rama izquierda*/
                        bar(xcactus1[6],370,xcactus1[7],385);/*barra horizontal de la rama derecha*/
                        bar(xcactus1[8],385,xcactus1[9],345);/*barra v. rama derecha*/
                        goto salir;
                    }
                        setfillstyle(SOLID_FILL,2);
                        bar(xcactus1[0],399,xcactus1[1],320);/*pilar*/
                        bar(xcactus1[2],373,xcactus1[3],340);/*barra vertical de la rama izquierda*/
                        bar(xcactus1[4],377,xcactus1[5],365);/*barra horizantal de la rama izquierda*/
                        bar(xcactus1[6],370,xcactus1[7],385);/*barra horizontal de la rama derecha*/
                        bar(xcactus1[8],385,xcactus1[9],345);/*barra v. rama derecha*/
                        delay(100);
                        setfillstyle(SOLID_FILL,BLACK);
                        bar(14,41,629,399);
                        setfillstyle(SOLID_FILL,WHITE);
                        fillpoly(60,Dinosaurio);
                        
                }else{
                    x1cactus2-=resta;x2cactus2-=resta;
                    ycactus2[0]-=resta;ycactus2[1]-=resta;ycactus2[2]-=resta;ycactus2[3]-=resta;
                    if(ycactus2[0] <= 257 && ycactus2[0] >= 205){
                        setfillstyle(SOLID_FILL,2);
                        bar(x1cactus2,399,x2cactus2,320);
                        goto salir;
                    }
                        setfillstyle(SOLID_FILL,2);
                        bar(x1cactus2,399,x2cactus2,320);
                        delay(100);
                        setfillstyle(SOLID_FILL,BLACK);
                        bar(14,41,629,399);
                        setfillstyle(SOLID_FILL,WHITE);
                        fillpoly(60,Dinosaurio);
                }
            }
    } while (i != 3);
    salir:
    game_over();
    f=fopen("C:\\TC20\\FICHEROS\\puntaje.txt","a");
    fprintf(f,"%d",puntaje);
    fclose(f);
    do
    {
        mver();
        if(minlimit(1,210,260,290,290)==1 && mclick()==1){
			mocultar();
            return 0;
        }
        if(minlimit(1,350,260,440,290)==1 && mclick()==1){
            mocultar();
            goto juego;
        }
    } while (click!=1);
    victoria:
    f=fopen("C:\\TC20\\FICHEROS\\puntaje.txt","a");
    fprintf(f,"%d\n",puntaje);
    fclose(f);
    v();
    Dino_victoria();
    do
    {
        mver();
    } while (mclick()!=1);
    

    closegraph(); 

    return 0; 
}