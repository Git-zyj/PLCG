#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 848366377;
signed char var_11 = (signed char)40;
unsigned char var_14 = (unsigned char)152;
int zero = 0;
unsigned char var_17 = (unsigned char)43;
unsigned char var_18 = (unsigned char)136;
unsigned long long int var_19 = 699191472052877423ULL;
unsigned char var_20 = (unsigned char)32;
unsigned int var_21 = 3159165370U;
long long int var_22 = 4427116119068607306LL;
_Bool var_23 = (_Bool)0;
unsigned short arr_2 [18] [18] ;
int arr_4 [18] [18] ;
unsigned short arr_5 [18] [18] [18] ;
long long int arr_14 [20] ;
_Bool arr_15 [20] [20] ;
int arr_16 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)40032;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 684790751;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)33111;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = -7940643168322139520LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 1288497863;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
