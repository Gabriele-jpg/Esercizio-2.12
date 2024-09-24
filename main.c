#include <stdio.h>

int main() {
    int giornoInizio, meseInizio, annoInizio, giornoFine, meseFine, annoFine, giorniTotali, anni, mesi, giorni;

    printf("Inserisci la data di inizio (gg mm aaaa): ");
    scanf("%d %d %d", &giornoInizio, &meseInizio, &annoInizio);
    printf("Inserisci la data di fine (gg mm aaaa): ");
    scanf("%d %d %d", &giornoFine, &meseFine, &annoFine);
    giorniTotali = (annoFine - annoInizio) * 360 + (meseFine - meseInizio) * 30 + (giornoFine - giornoInizio);
    anni = giorniTotali / 360;
    mesi = (giorniTotali % 360) / 30;
    giorni = giorniTotali % 30;

    printf("Tempo trascorso: %d anni, %d mesi, %d giorni\n", anni, mesi,giorni);

    return 0;
}
