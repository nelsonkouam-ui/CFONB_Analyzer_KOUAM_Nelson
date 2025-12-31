//
// Created by nelso on 31/12/2025.
//

#ifndef CFONB_ANALYZER_CFONB_STATS_H
#define CFONB_ANALYZER_CFONB_STATS_H


// Calcule les stats d'un bloc
StatsCompte calculerStatsBloc(BlocCompte* bloc);

// Affiche les stats de tous les comptes
void afficherStatsFichier(FichierCFONB* fichier);

// Recherche des opérations selon critères
Operation** rechercherOperations(FichierCFONB* fichier,
                                  const char* numeroCompte,
                                  long montantMin,
                                  DateCFONB* date,
                                  int* nbResultats);

#endif //CFONB_ANALYZER_CFONB_STATS_H