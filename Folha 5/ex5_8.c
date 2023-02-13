int contar_maiores(int vec[], int size, int val){
    int counter = 0;
    for (int i = 0; i < size; i++){
        if (vec[i] > val){
            counter++;
        }
    }
    return counter;
}