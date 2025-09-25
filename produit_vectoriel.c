#include <stdio.h>

int main() {
    float u[3], v[3], produit[3];

    printf("Entrer les coordonnees du vecteur u : ");
    scanf("%f %f %f", &u[0], &u[1], &u[2]);

    printf("Entrer les coordonnees du vecteur v : ");
    scanf("%f %f %f", &v[0], &v[1], &v[2]);

    // Calcul du produit vectoriel u × v
    produit[0] = u[1]*v[2] - u[2]*v[1];
    produit[1] = u[2]*v[0] - u[0]*v[2];
    produit[2] = u[0]*v[1] - u[1]*v[0];

    printf("Le produit vectoriel u × v = (%.2f, %.2f, %.2f)\n",
           produit[0], produit[1], produit[2]);

    return 0;
}

