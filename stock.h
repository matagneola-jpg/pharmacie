#ifndef STOCK_H
#define STOCK_H

// ================= STRUCTURE =================
typedef struct {
    int id;
    char nom[50];
    int quantite;
    int seuil_alerte;
} Medicament;

// ================= FONCTIONS =================
void ajouterMedicament();
void afficherStock();
void alerteStockFaible();
void diminuerStock(char nom_med[]);
int medicamentExiste(char nom_med[]);

#endif
