#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1476795767;
long long int var_1 = -3896668293596010066LL;
unsigned long long int var_2 = 13384614987831848568ULL;
unsigned long long int var_3 = 7737078215435627288ULL;
long long int var_4 = -5376543855162248481LL;
signed char var_5 = (signed char)-67;
long long int var_6 = -2523263418775426123LL;
int var_7 = -1312817844;
unsigned char var_8 = (unsigned char)31;
short var_10 = (short)-114;
long long int var_11 = -1424057311168654938LL;
unsigned int var_12 = 2126277125U;
unsigned int var_13 = 951700152U;
int zero = 0;
unsigned short var_14 = (unsigned short)10940;
unsigned char var_15 = (unsigned char)135;
unsigned long long int var_16 = 4710904704331731199ULL;
unsigned int var_17 = 1869701257U;
unsigned char var_18 = (unsigned char)109;
signed char var_19 = (signed char)-14;
short var_20 = (short)-17341;
long long int var_21 = -7186349917298986769LL;
long long int var_22 = -8561872767969616843LL;
int var_23 = -2129304828;
short var_24 = (short)-21166;
int var_25 = -1442057496;
unsigned char var_26 = (unsigned char)93;
long long int arr_0 [22] [22] ;
_Bool arr_1 [22] ;
unsigned long long int arr_3 [22] [22] ;
long long int arr_4 [22] [22] [22] ;
_Bool arr_5 [22] [22] ;
long long int arr_10 [17] ;
unsigned int arr_7 [22] ;
short arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -8512965963957247029LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 11572943403846568480ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -8057893706837716050LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = -5837991388485248236LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 708396263U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (short)13692;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
