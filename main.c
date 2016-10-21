#include <stdio.h>
#include <stdlib.h>
//constante globale
#define TAILLE 100
#define PI 3.14

int main()
{

 int longueur=0;                                                    //ALGORITHME : Rectangle
 int largeur=0;                                                     //BUT:Faire un rectangle avec les cotés différents de l'intérieur
                                                                    //ENTREE:Longueur et largeur
 int i=0;                                                           //SORTIE:Rectangle défini par la longueur et largeur
 int j=0;
 printf("Veuillez entrez la longueur\n");                           //VAR i,j,longueur,largeur :entier
 scanf("%d",&longueur);
                                                                            //DEBUT
 printf("Veuillez entrer la largeur\n");                                    //ECRIRE "Veuillez entrer la longueur
 scanf("%d",&largeur);                                                      //LIRE longueur
                                                                            //ECRIRE "Veuillez entrez la largeur
 for (i=0;i<longueur;i++){                                                  //LIRE largeur
        for (j=0;j<largeur;j++){                                            //POUR i=0 et i<longueur et i=i+1 FAIRE
                if(i!=0 && i!=longueur-1 && j!=0 && j!=largeur-1){          //POUR j=0 et j<largeur et j=j+1 FAIRE
                                                                            //SI i <> 0 et i<>longueur-1 et j<>0 et j<>largeur-1 ALORS
                    printf("-");                                            //ECRIRE "-"
                                                                            //SINON
                }else{                                                      //ECRIRE "+"
                    printf("+");                                                //FIN
                }
        }
    printf("\n");
 }














  /*  int i=0;
    int j=0;
    int taille=10;
    //Tableau integer
    int tabInt[TAILLE];
    //Tableau reel
    float tabFloat[TAILLE];
    //Tableau car
    char tabChar[TAILLE];
    //Tableau 2 dimension entier
    int tabIntddim[TAILLE][TAILLE];

    for(i=0;i<TAILLE;i++){
        for(j=0;j<TAILLE;j++){

            tabIntddim[i][j]=0;
            printf("%d",tabIntddim[i][j]);

        }
            printf("\n");
    }





 /*TABLEAU   1 DIMENSION
        tabInt[i]=0;
        printf("%d",tabInt[i]);

        tabFloat[i]=0.0;
        printf("%f",tabFloat[i]);

        tabChar[i]='o';
        printf("%c",tabChar[i]);
    }
















     /*   //TANT QUE

        int choix=0;

        printf("Prog calcul\n");
        printf("1:Addition\n");
        printf("2:Soustraction\n");
        printf("3:multiplication\n");
        printf("4:division\n");
        printf("0:quitter\n");

        printf("choix");
        scanf("%d",&choix);

        while(choix!=0){

            switch(choix){

            case 1:printf("+\n");break;
            case 2:printf("-\n");break;
            case 3:printf("*\n");break;
            case 4:printf("/\n");break;
            default:printf("mauvais choix");break;

            }
             printf("1:Addition\n");
        printf("2:Soustraction\n");
        printf("3:multiplication\n");
        printf("4:division\n");
        printf("0:quitter\n");

        printf("choix:\n");
        scanf("%d",&choix);

        }


    printf("bye");





    /*SWITCH CASE
    int x=0;
    printf("saisir une valeur entre 1 e t3 \n");

    scanf("%d",&x);
    switch(x){

                case 1:printf("1");break;
                case 2:printf("2");break;
                case 3:printf("3");break;
                default :printf("mauvaise saisie");break;
    }

     */
   /*  int choix=0;

     do{

        printf("programme faire tant-que\n");
        printf("1:lancer prog\n");
        printf("0:quitter prog\n");
        scanf("%d",&choix);

     }while(choix!=0);

     printf("bye\n");


//POUR LE IF
    /*
  int val=0;
  int res=0;
  int gagne=0;
 // printf("entrez une valeur positive, negative ou nul\n");
  //scanf("%d",&val);


  if(val==gagne || res==gagne){

    printf("true");
  }else{
    printf("faux");
  }

  /*if(!gagne){
    printf("vous avez gagné\n");
  }else{
    printf("vous avez perdu\n");
  }*/


  /*opérateur de calcul en
  +
  -
  *
  /
  %

  opérateur de comparaison
  ==
  !=
  <
  >
  <=
  >=
  opérateur logique
  && et
  || ou
  !  pas
  */















    //commentaires ligne
    /*commentaires paragaphe*/
  /*  int a=0;
    unsigned int b=255;
    long lg=100;
    float f=0.0;
    double dbl=0.0;
    char c='a';
    int car=0;
    char tabchaine[TAILLE];
    char tabchaine1[TAILLE];
    char tabchaine2[TAILLE];
    char tabchaine3[TAILLE];
    char tabchaine4[TAILLE];
    int i=0;

    printf("Carte d'identité\n");
    printf("saisir l'id:\n");
    scanf("%d",&id);
    //fflush(stdin);
    while (c!= '\n' && c !=EOF){
        c=getchar();
    }
    printf("Votre Nom :\n");
    fgets(tabNom,100,stdin);
    printf("Votre Prenom :\n");
    fgets(tabPrenom,100,stdin);
    printf("Votre Adresse :\n");
    fgets(tabAdresse,100,stdin);
    printf("Votre CP :\n");
    fgets(tabCp,100,stdin);
    printf("Votre Ville :\n");
    fgets(tabVille,100,stdin);
    printf("Votre date de naissance :\n");
    fgets(tabDdn,100,stdin)







   /* printf("Veuillez saisir votre nom et prenom:\n");
    scanf("%s",tabchaine);
    //fgets (tabchaine,TAILLE,stdin);
    printf("Votre nom et prenom sont %s",tabchaine);

    while(tabchaine[i]!='\0'){
        printf("debug char :%c",tabchaine[i]);
        i++; //i=i+1

    }*/

    /*Affichage des constantes
    printf("%d\n",TAILLE);
    printf("%f\n",PI);*/


    /* format :
        -integer = %i ou %d
        -long = %d
        -float = %f
        -double = %lf
        -char = %c
        -unsigned int = %u
        -tabCar"Chaine" = %s
        -hexa = %x
    */



  /*  printf("valeur de a est :%i\t%x\n",a,a);
    printf("valeur de b est :%i\t%x\n",b,b);
    printf("valeur de lg est :%d\t%x\n",lg,lg);
    printf("valeur de f est :%f\t%x\n",f,f);
    printf("valeur de dbl est :%lf\t%x\n",dbl,dbl);
    printf("valeur de c est :%c\t%x\n",c,c);


     printf("Veuillez saisir un entier : \n");
     scanf("%i",&a);
     printf("la valeur de a est : %i et l'addresse de a est : %x\n",a,&a);

     printf("Veuillez saisir un entier : \n");
     scanf("%u",&b);
     printf("la valeur de b est : %i et l'addresse de b est : %x\n",b,&b);

     printf("Veuillez saisir un entier : \n");
     scanf("%d",&lg);
     printf("la valeur de lg est : %d et l'addresse de lg est : %x\n",lg,&lg);

     printf("Veuillez saisir un entier : \n");
     scanf("%f",&f);
     printf("la valeur de f est : %f et l'addresse de f est : %x\n",f,&f);

     printf("Veuillez saisir un entier : \n");
     scanf("%lf",&dbl);
     printf("la valeur de dbl est : %lf et l'addresse de dbl est : %x\n",dbl,&dbl);
    fflush(stdin);
     printf("Veuillez saisir un caractere : \n");
     scanf("%c",&c);
     printf("la valeur de c est : %c et l'addresse de c est : %x\n",c,&c);


     printf("getc()\n");
     car=getc(stdin);
     putchar(car);
     printf("\n");
     fflush(stdin);
     printf("getchar()\n");
     car=getchar();
     putchar(car);*/







   /* putc(c,stdout); (la meme que celui juste en dessous)
    putchar(c);   */



    return 0;
}

