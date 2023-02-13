int ordenada(int vec[], int size){
    for (int i = 0; i <= size-2; i++){
        if (vec[i] > vec[i+1]){
            return 0;
        }
    }
    return 1;
}
