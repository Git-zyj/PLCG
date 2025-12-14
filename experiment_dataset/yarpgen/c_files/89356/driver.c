#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30079;
short var_1 = (short)4947;
_Bool var_3 = (_Bool)1;
short var_4 = (short)27971;
unsigned short var_9 = (unsigned short)33561;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)23475;
int var_13 = 587740545;
int zero = 0;
unsigned int var_14 = 2890834316U;
int var_15 = 283331240;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2266834434U;
unsigned short var_18 = (unsigned short)23780;
unsigned long long int var_19 = 6031032540209039568ULL;
long long int var_20 = 7990205273680144887LL;
long long int arr_0 [25] [25] ;
_Bool arr_1 [25] ;
long long int arr_4 [16] ;
long long int arr_5 [16] ;
_Bool arr_8 [25] ;
unsigned int arr_2 [25] ;
unsigned int arr_3 [25] ;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -3569415252545845984LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 6150696529096547502LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -4242946492635515644LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1426337630U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4115570183U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -4279015703927079199LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
