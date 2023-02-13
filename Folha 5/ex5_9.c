int filtrar_positivos(int vec[], int size){
    int countPos = 0, j = 0;
    for (int i = 0; i < size; i++){
        if (vec[i] > 0){
            vec[j] = vec[i];
            countPos++;
            j++;
        }
    }
    return countPos;
}
