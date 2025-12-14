#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1189585432U;
unsigned char var_3 = (unsigned char)148;
unsigned short var_4 = (unsigned short)31978;
short var_6 = (short)22405;
int zero = 0;
unsigned long long int var_13 = 4094897483674645915ULL;
unsigned char var_14 = (unsigned char)159;
_Bool var_15 = (_Bool)1;
unsigned int arr_2 [11] [11] ;
short arr_3 [11] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2762221659U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-12096;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 1434172986;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
