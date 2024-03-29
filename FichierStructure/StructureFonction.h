#pragma once
#include <iostream>
#include <fstream>         // Biblioth�que offrant les outils pour utiliser les fichiers : f : pour file et stream pour le flux
// Quand on lit des donn�es dans un fichier, c'est un flux input (in) l'�quivalent du cin, qui va du disque dur vers la m�moire
// Quand on sauvegarde des donn�es dans un fichier, c'est un flux en sortie (cout), qui va de la m�moire vers le disque dur
#include <string>
#include <iomanip>
using namespace std;
const string TITRE = "R�sultats du cours de programmation structur�e";
const string TITRE_COL1 = "Nom �tudiant";
const string TITRE_COL2 = "Evaluation 1";
const string TITRE_COL3 = "Eval 2";
const string TITRE_COL4 = "Eval 3";
const string TITRE_COL5 = "Total";
const string TITRE_COL6 = " R�sultats";
const string REUSSITE = " Succ�s";
const string PAS_REUSSITE = " �chec";
const string STAT = "Statistiques";

const string MOYENNE = "Moyenne";

const char MOTIF1 = '-';
const char MOTIF2 = ' ';

const int ENTRE_DEUX = 3;
const int COL1 = 32;
const int COL2 = TITRE_COL2.size() + ENTRE_DEUX;
const int COL3 = TITRE_COL3.size() + ENTRE_DEUX;
const int COL4 = TITRE_COL4.size() + ENTRE_DEUX;
const int COL5 = TITRE_COL5.size() + ENTRE_DEUX;
const int COL6 = TITRE_COL6.size() + ENTRE_DEUX;
const int LARGEUR = COL1 + COL2 + COL3 + COL4 + COL5 + COL6;
const int NOTE_PASSAGE = 60;

//Liste des strucutres:c'esr un nouveau type de variable complexe

struct noteEtudiant
{
    string nomEtudiant;
    double examen1;
    double examen2;
    double examenFinal;
    double total;
};

struct pourLesCalculs
{
    double moyenne1 = 0;
    double moyenne2 = 0;
    double moyenneFinal = 0;
    double moyenneTotal = 0;
    int nbEtudiant = 0;
};


ifstream ouvrirFichierLecture(string nomFichier);
ofstream ouvrirFichierEcriture(string nomFichier);
void ecrireEnTete(ofstream& sorti);
noteEtudiant lireEnregistrement(ifstream& canal);

void lireEnregistrement(ifstream& canal,noteEtudiant& etudiantEnCours);
pourLesCalculs faireCalculs(noteEtudiant etudiantEnCours);


