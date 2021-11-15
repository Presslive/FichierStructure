// But : Utiliser les fichiers pour stocker de l'information.
// On veut faire la moyenne des examens des �tudiants
// Auteur : Karine Moreau
// Date : 2021-11-08

#include "StructureFonction.h"

int main()
{
    setlocale(LC_ALL, "");
    // D�claration des constantes
    const string NOM_FICHIER = "texte.txt";
    const string RESULTAT = "Resultat.txt";
  

    // D�clarations des variables
    ifstream canalEntree;            // if pour input file et stream pour la voie de circulation, une route 
    ofstream canalSortie;            // of pour output file route pour partir de la m�moire et aller vers le disque dur
    // 4 variables pour lire le contenu du fichier
    noteEtudiant unEtudiantEtSesNotes;              //nom de l' envellope qui contient 4 type de variables

    pourLesCalculs totalEtMoyenne;
    




    
    //Initialise le canal d'entr�e
    canalEntree = ouvrirFichierLecture(NOM_FICHIER);
    //Initialise le canal de sorti
    canalSortie = ouvrirFichierEcriture(RESULTAT);


    ecrireEnTete(canalSortie);  //Entete fonction
   

    // Le fichier est bien ouvert, on continue
    cout << "Tout baigne !!" << endl;

    //on tente de lire le premier enregistrement 
    unEtudiantEtSesNotes= lireEnregistrement(canalEntree);


    // Rien nous dit que dans les variables il va y avoir des informations, car le fichier pourrait �tre vide.
    // Est-ce qu'on a pu lire dans le fichier. Le test est de v�rifier si on a pas atteint la fin du fichier. eof : end of file c'est une fonction

    while (!canalEntree.eof())
    {
        // La tentative de lecture dans le fichier source a r�ussi, on peut traiter les informations lues
        //Audet Nicole               			 30.00     30.00     28.00     88.00 Succ�s 
        total = examen1 + examen2 + examenFinal;
        canalSortie << setfill(MOTIF2) << left << setw(COL1) << nomEtudiant;
        canalSortie << setfill(MOTIF2) << right << setw(COL2) << examen1;
        canalSortie << setfill(MOTIF2) << right << setw(COL3) << examen2;
        canalSortie << setfill(MOTIF2) << right << setw(COL4) << examenFinal;
        canalSortie << setfill(MOTIF2) << right << setw(COL5) << total;
        canalSortie << setfill(MOTIF2) << left << setw(COL6) << (total >= NOTE_PASSAGE ? REUSSITE : PAS_REUSSITE) << endl;

       totalEtMoyenne = faireCalculs(unEtudiantEtSesNotes);



        // On TENTE de lire l'enregistrement (ligne) suivant
       /*  getline(canalEntree, nomEtudiant, '\t');
        canalEntree >> examen1;
        canalEntree >> examen2;
        canalEntree >> examenFinal;
        canalEntree.ignore(); */            // On n'est pas oblig� de mettre 1, '\n' car ce sont les valeurs par d�faut
         unEtudiantEtSesNotes= lireEnregistrement(canalEntree);

    }


    // Pied de page du fichier de sortie :
    /*
    ----------------------------------------------------------------------------------
    Statistiques
    Moyenne                              19.73     20.00     23.00     62.73
 ----------------------------------------------------------------------------------

    */

    // On finit de calculer moyenne car on a la somme pour l'instant
    if (nbEtudiant > 0)
    {
        moyenne1 /= nbEtudiant;
        moyenne2 /= nbEtudiant;
        moyenneFinal /= nbEtudiant;
        moyenneTotal = moyenne1 + moyenne2 + moyenneFinal;
    }

    canalSortie << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;
    canalSortie << setfill(MOTIF2) << left << setw(COL1) << STAT << endl;
    canalSortie << setfill(MOTIF2) << left << setw(COL1) << MOYENNE;
    canalSortie << setfill(MOTIF2) << right << setw(COL2) << moyenne1;
    canalSortie << setfill(MOTIF2) << right << setw(COL3) << moyenne2;
    canalSortie << setfill(MOTIF2) << right << setw(COL4) << moyenneFinal;
    canalSortie << setfill(MOTIF2) << right << setw(COL5) << moyenneTotal << endl;
    canalSortie << setfill(MOTIF1) << setw(LARGEUR) << MOTIF1 << endl;

    cout << "il n'y a plus de donn�es dans le fichier" << endl;

    // A la fin du programme : il faut fermer les fichiers en passant par le canal
    canalEntree.close();
    canalSortie.close();



    system("pause");
    return 0;
}



/*Plan de test

*/


