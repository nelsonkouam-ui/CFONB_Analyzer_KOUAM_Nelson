//
// Created by nelso on 31/12/2025.
//

#include "../include/cfonb_parser.h"

// Parse une ligne selon son type
RecordType detecterTypeLigne(const char* ligne);

// Parse un enregistrement 01 ou 07
int parseInfoCompte(const char* ligne, InfoCompte* info);

// Parse un enregistrement 04
int parseOperation(const char* ligne, Operation* op);

// Parse un enregistrement 05 et l'ajoute à l'opération courante
int parseComplement(const char* ligne, Operation* op);

// Charge un fichier complet
FichierCFONB* chargerFichier(const char* nomFichier);

// Libère la mémoire
void libererFichier(FichierCFONB* fichier);