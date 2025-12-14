#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2119321343U;
unsigned short var_6 = (unsigned short)27592;
long long int var_8 = 1789121533539526191LL;
short var_9 = (short)-22176;
_Bool var_10 = (_Bool)1;
short var_12 = (short)32010;
unsigned short var_13 = (unsigned short)55309;
signed char var_15 = (signed char)80;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = 8821930858620401561LL;
_Bool var_20 = (_Bool)0;
int var_21 = -1756532434;
signed char var_22 = (signed char)-69;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)14534;
unsigned char var_25 = (unsigned char)244;
unsigned char var_26 = (unsigned char)190;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)208;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)1;
long long int var_32 = 8330159909276246385LL;
unsigned long long int arr_0 [14] ;
unsigned short arr_2 [14] ;
unsigned long long int arr_4 [16] ;
long long int arr_7 [16] [16] ;
long long int arr_15 [21] ;
unsigned int arr_16 [21] [21] ;
unsigned short arr_3 [14] ;
int arr_8 [16] [16] ;
signed char arr_9 [16] ;
unsigned long long int arr_10 [16] ;
int arr_11 [16] ;
long long int arr_14 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 6428210346598520222ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)47967;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 12162564182672847652ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 8301611608732012946LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? -4650453831029574730LL : -5650259653228443922LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 3989224581U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)21984;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 2001214962;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 7562337557450044823ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -156352860;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 8152075125148480641LL : -8285283194088990919LL;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
