#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2240762034U;
unsigned int var_4 = 1870382148U;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)240;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)244;
long long int var_10 = -8097721266757214441LL;
int zero = 0;
unsigned char var_11 = (unsigned char)15;
int var_12 = 21801394;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3747369947U;
unsigned int var_15 = 1151175743U;
unsigned int var_16 = 1182376884U;
unsigned int var_17 = 1072977860U;
_Bool arr_0 [15] [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)6568;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
