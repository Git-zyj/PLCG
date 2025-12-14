#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 56313335;
int var_10 = -139232696;
int zero = 0;
unsigned char var_11 = (unsigned char)94;
unsigned short var_12 = (unsigned short)21788;
unsigned int var_13 = 4256931923U;
int var_14 = 696502631;
unsigned long long int var_15 = 11074665160212025327ULL;
unsigned long long int var_16 = 10478085408937438822ULL;
unsigned int var_17 = 1292284140U;
int arr_2 [10] [10] ;
unsigned int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 579304534;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 3923403758U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
