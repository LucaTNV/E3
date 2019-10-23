#include <stdio.h>

char cambiaLettera(char lettera);

int main() {
    char carattereUtente; //Carattere inserito dall'utente

    printf("Inserire un carattere: \n");
    scanf("%c", &carattereUtente); //Acquisizione carattere

    //Stampa risultato funzione
    printf("%c -> %c\n", carattereUtente, cambiaLettera(carattereUtente));

    return 0;
}

/**
 * Restituisce il corrispondente carattere maiuscolo se minuscolo e viceversa.
 * @param lettera Lettera di input
 * @return Carattere cambiato oppure il carattere '?' se non è una il carattere in input non è una lettera
 */
char cambiaLettera(char lettera) {
    if (lettera >= 'a' && lettera <= 'z')       //Lettere minuscole
        return (char) ('A' + lettera - 'a');
    else if (lettera >= 'A' && lettera <= 'Z')  //Lettere maiuscole
        return (char) ('a' + lettera - 'A');
    else                                        //Carattere non lettera
        return '?';
}   //modifica per la commit