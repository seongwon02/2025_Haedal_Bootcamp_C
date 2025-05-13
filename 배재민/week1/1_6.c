int main(void) {
    int A, B;
    scanf("%d", &A);                         
    scanf("%d", &B);                          

                                           
    int ones = B % 10;                   
    int tens = (B / 10) % 10;               
    int hundreds = B / 100;                 

                                           
    printf("%d\n", A * ones);
                                           
    printf("%d\n", A * tens);
                                            
    printf("%d\n", A * hundreds);
                                           
    printf("%d\n", A * B);

    return 0;
}