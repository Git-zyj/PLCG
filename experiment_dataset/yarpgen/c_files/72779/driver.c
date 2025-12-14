#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3885565722U;
unsigned long long int var_1 = 17858362026391531354ULL;
unsigned char var_3 = (unsigned char)251;
long long int var_6 = 5611725885421728934LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)28;
unsigned int var_11 = 3661432815U;
int zero = 0;
unsigned long long int var_12 = 5589445252084162231ULL;
short var_13 = (short)-18526;
int var_14 = 586162073;
unsigned short var_15 = (unsigned short)45549;
long long int arr_1 [12] ;
int arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] ;
long long int arr_7 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -8833007142492377504LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1829958796;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 8839909743273634744ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -8284345715254806244LL;
}

void checksum() {
    hash(&seed, var_12);
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
