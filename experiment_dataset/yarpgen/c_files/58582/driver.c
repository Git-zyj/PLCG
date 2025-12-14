#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 672849535;
short var_1 = (short)18050;
long long int var_5 = -3227384576763338682LL;
unsigned char var_6 = (unsigned char)72;
int var_7 = 668897676;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2958347895U;
short var_13 = (short)-5201;
int var_15 = -79427622;
int zero = 0;
long long int var_16 = -6862785911754074766LL;
unsigned int var_17 = 2834833620U;
int var_18 = 777696798;
signed char var_19 = (signed char)-66;
long long int var_20 = -2060135097899575624LL;
int var_21 = 2119120343;
_Bool var_22 = (_Bool)0;
unsigned int arr_0 [23] ;
long long int arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 643787084U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -7119759237407573662LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)4589;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
