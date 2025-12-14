#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -416042434;
long long int var_2 = 6857563035183956138LL;
signed char var_3 = (signed char)-31;
unsigned long long int var_5 = 10789362499831373793ULL;
_Bool var_7 = (_Bool)1;
long long int var_11 = -7175185575281075084LL;
int zero = 0;
unsigned char var_13 = (unsigned char)201;
short var_14 = (short)16201;
long long int var_15 = 6013501014943591560LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)122;
signed char var_18 = (signed char)-5;
unsigned char var_19 = (unsigned char)106;
long long int var_20 = -6668988269728925914LL;
unsigned long long int var_21 = 13462932837297014158ULL;
short var_22 = (short)-25101;
unsigned char arr_0 [23] [23] ;
signed char arr_3 [23] [23] ;
int arr_4 [25] ;
short arr_5 [25] ;
unsigned long long int arr_6 [25] [25] ;
unsigned char arr_10 [24] [24] ;
long long int arr_8 [25] ;
signed char arr_11 [24] ;
_Bool arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1488511068 : 1755925357;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)18806;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = 15677134101198034623ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1006658290956135033LL : 6146398837628319998LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
