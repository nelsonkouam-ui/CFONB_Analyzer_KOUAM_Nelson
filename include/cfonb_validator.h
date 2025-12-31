//
// Created by nelso on 31/12/2025.
//

#ifndef CFONB_ANALYZER_CFONB_VALIDATOR_H
#define CFONB_ANALYZER_CFONB_VALIDATOR_H

// Valide la structure d'un bloc (séquence 01-04-07)
RapportValidation validerStructureBloc(BlocCompte* bloc);

// Vérifie la cohérence du numéro de compte
RapportValidation validerCoherenceCompte(BlocCompte* bloc);

// Recalcule et vérifie le solde
RapportValidation validerSolde(BlocCompte* bloc);

// Validation complète d'un fichier
RapportValidation* validerFichier(FichierCFONB* fichier, int* nbRapports);


#endif //CFONB_ANALYZER_CFONB_VALIDATOR_H