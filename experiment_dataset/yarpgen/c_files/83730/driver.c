#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
short var_3 = (short)23663;
short var_4 = (short)-16606;
long long int var_5 = 9103685732247484637LL;
long long int var_6 = -7581315527873262165LL;
unsigned short var_8 = (unsigned short)8481;
unsigned short var_9 = (unsigned short)15085;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 7430744042205919645ULL;
int zero = 0;
long long int var_14 = -358075567193035534LL;
unsigned long long int var_15 = 13467507278692294598ULL;
unsigned int var_16 = 2225366993U;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4340122311760253327LL;
unsigned int var_19 = 1664248369U;
short var_20 = (short)-31624;
unsigned char var_21 = (unsigned char)177;
unsigned long long int arr_0 [21] ;
_Bool arr_1 [21] [21] ;
int arr_2 [21] ;
unsigned char arr_3 [21] [21] [21] ;
unsigned int arr_4 [21] [21] ;
unsigned char arr_9 [21] [21] [21] ;
int arr_10 [21] [21] ;
int arr_12 [21] ;
int arr_20 [18] ;
unsigned int arr_21 [18] ;
short arr_7 [21] [21] ;
int arr_17 [18] ;
unsigned int arr_18 [18] ;
int arr_19 [18] ;
unsigned long long int arr_24 [18] [18] ;
unsigned char arr_25 [18] ;
_Bool arr_30 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 15863906663238300910ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 461006246;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 3594657756U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = 787165909;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 221691924;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 532334709;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 1798614395U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (short)7468;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = 1511354251;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 4073182763U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = 1511121324;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 92163348068007878ULL : 11134947649170507430ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)58 : (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
