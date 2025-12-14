#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2124073328U;
short var_11 = (short)14797;
short var_12 = (short)29926;
unsigned int var_15 = 813131119U;
int zero = 0;
unsigned short var_18 = (unsigned short)18671;
int var_19 = -328234759;
signed char var_20 = (signed char)11;
long long int var_21 = 6035161553135570197LL;
unsigned int var_22 = 1050953506U;
signed char var_23 = (signed char)116;
long long int var_24 = -5194391635578130797LL;
int var_25 = -362919305;
unsigned short var_26 = (unsigned short)27979;
short var_27 = (short)-17098;
long long int var_28 = -6239262824866897082LL;
long long int arr_1 [15] ;
unsigned long long int arr_2 [15] [15] ;
signed char arr_7 [23] ;
unsigned int arr_9 [24] ;
unsigned int arr_10 [24] ;
short arr_12 [24] ;
int arr_13 [24] ;
unsigned long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -7396553601944020795LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 5309345189778661314ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 1223980299U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1058610810U : 3975588333U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)-16298 : (short)-258;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 1520146682;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 9557780976671068198ULL : 16326255959461048244ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
