#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -329138628;
short var_2 = (short)-10741;
unsigned short var_4 = (unsigned short)36958;
unsigned char var_5 = (unsigned char)15;
int zero = 0;
unsigned long long int var_11 = 8394016386028408196ULL;
unsigned int var_12 = 4237696005U;
unsigned long long int var_13 = 17515026850435770668ULL;
unsigned short var_14 = (unsigned short)11183;
unsigned long long int var_15 = 3687549747327057622ULL;
_Bool var_16 = (_Bool)0;
short arr_0 [13] ;
long long int arr_1 [13] ;
unsigned short arr_2 [13] ;
_Bool arr_3 [13] ;
signed char arr_5 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)17838;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1635050157758035145LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)39781;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)122;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
