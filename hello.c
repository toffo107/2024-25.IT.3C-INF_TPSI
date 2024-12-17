#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    // Il valore di ritorno della funzione
    return 1 - a;
}

// Funzione per simulare la porta AND
int AND(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta AND
    return a*B;
}

// Funzione per simulare la porta OR
int OR(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
    return a+B;
}

int main() {
    // Dichiara una variabile
    int A, B, C, D, E, F;

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di A (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &A);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore A: %d\n", A);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di B (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &B);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore B: %d\n", B);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di C (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &C);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore C: %d\n", C);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di D (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &D);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore D: %d\n", D);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di E (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &E);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore E: %d\n", E);
   
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di F (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &F);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore F: %d\n", F);

    if (A != 0 && A != 1 && B != 0 && B != 1 && C != 0 && C != 1 && D != 0 && D!= 1 && E != 0 && E != 1 && F != 0 && F != 1) {
        printf("I valori inseriti non sono 1 o 0\n"); 
    
    
    else {

        // Procediamo con l'esecuzione solo se il numero è 1 o 0
        printf("I valori inseriti sono 1 o 0\n");
    
    }

    // Porta NOT su "A"
    int notA = NOT(A);
    // Porta OR su "A+A"
    int orAA = OR(notA, A);

    // Porta NOT su "B"
    int notB = NOT(B);
    // Porta OR su "B+B"
    int orBB = OR(notB, B);

    // Porta AND su "A*B"
    int andAB = AND(orAA, orBB);

    // Porta NOT su "C"
    int notC = NOT(C)
    // Porta or su "C+C"
    int orCC = OR(notC, C);

    // Porta AND su "(A*B)*C"
    int andABC = AND(andAB, orCC);

    // Porta NOT su "D"
    int notD = NOT(D)
    // Porta OR su "D+D"
    int orDD = OR(notD, D);

    // Porta AND su "((A*B)*C)*D)"
    int andABCD = AND(andABC, orDD);

    // Porta NOT su "E"
    int notE = NOT(E);
    // Porta OR su "E+E"
    int orEE = OR(notE, E);

    // porta AND su "(((A*B)*C)*D)*E"
    int andABCDE = AND(andABCD, orEE);

    // Porta NOT su "F"
    int notF = NOT(F)
    // Porta OR su "D+D"
    int orFF = OR(notF, F);

    // porta AND su "((((A*B)*C)*D)*E)*F"
    int andABCDEF = AND(andABCDE, orFF);

    printf(andABCDEDF);

    }




    }








        // Esempio di porta NOT
        printf("Il valore di A viene trasformato da una porta NOT\n");
        int notA = NOT(A);
        printf("Il valore di uscita della porta NOT è: %d\n", notA);

        // Esempio di porta AND
        printf("I valori di A e B vengono trasformati da una porta AND\n");
        int andAB = AND(A, B);
        printf("Il valore di uscita della porta AND è: %d\n", andAB);

// Esempio di porta OR
        printf("I valori di A e B vengono trasformati da una porta OR\n");
        int orAB = OR(A, B);
        printf("Il valore di uscita della porta OR è: %d\n", orAB);
    }        

    printf("\n\n");
}