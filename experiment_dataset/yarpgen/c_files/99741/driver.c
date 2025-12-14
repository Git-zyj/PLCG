#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_7 = 1717617241275282363LL;
unsigned short var_9 = (unsigned short)37923;
_Bool var_12 = (_Bool)1;
unsigned short var_16 = (unsigned short)47013;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)52441;
long long int var_19 = -2335438653917499640LL;
unsigned short var_20 = (unsigned short)10099;
long long int arr_2 [16] ;
unsigned short arr_5 [16] [16] [16] ;
unsigned short arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 4082778074591408132LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)48485;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)29314;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
