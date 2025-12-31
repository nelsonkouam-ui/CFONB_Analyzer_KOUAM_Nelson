//
// Created by nelso on 31/12/2025.
//

#include "../include/cfonb_utils.h"


// Conversion du caractère signé en montant
Montant decoderMontant(const char* montantStr, int nbDecimales);

// Parsing d'une date JJMMAA
DateCFONB parseDate(const char* dateStr);

// Extraction d'une sous-chaîne (positions CFONB sont en base 1)
void extraireChamp(const char* ligne, int debut, int fin, char* dest);

// Affichage formaté d'un montant
void afficherMontant(Montant m);

// Comparaison de dates
int comparerDates(DateCFONB d1, DateCFONB d2);