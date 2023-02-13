int select_sort(int vec[], int n) {
    int i, j;
    //bastam 2 iteracoes do algoritmo selection sort para termos o segundo menor numero no segundo indice do array
    for(i = 0; i <= 1; i++) {
        int imin = i; // índice inicial do mínimo
        for(j = i+1; j < n; j++) {
            if(vec[j] < vec[imin]) imin = j;
        }
            // trocar o mínimo com vec[i]
        if(imin != i) {
            int temp = vec[i];
            vec[i] = vec[imin];
            vec[imin] = temp;
        }
    }
    return vec[1];
}
