//
// Created by nelso on 31/12/2025.
//

#include "../include/cfonb_validator.h"

// Valide la structure d'un bloc (séquence 01-04-07)
RapportValidation validerStructureBloc(BlocCompte* bloc);

// Vérifie la cohérence du numéro de compte
RapportValidation validerCoherenceCompte(BlocCompte* bloc);

// Recalcule et vérifie le solde
RapportValidation validerSolde(BlocCompte* bloc);

// Validation complète d'un fichier
RapportValidation* validerFichier(FichierCFONB* fichier, int* nbRapports);
