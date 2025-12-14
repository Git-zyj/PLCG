#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -354157906;
signed char var_2 = (signed char)41;
long long int var_3 = 6685661869686406117LL;
signed char var_6 = (signed char)124;
int var_7 = -881125702;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)87;
unsigned long long int var_11 = 18119524425100919140ULL;
int var_12 = 911316638;
unsigned long long int var_14 = 1039934413283754753ULL;
unsigned short var_18 = (unsigned short)17917;
int zero = 0;
unsigned short var_19 = (unsigned short)23254;
unsigned short var_20 = (unsigned short)41497;
_Bool var_21 = (_Bool)1;
int var_22 = 1398072521;
signed char var_23 = (signed char)56;
int var_24 = -1051539529;
unsigned char arr_1 [20] ;
signed char arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned char arr_6 [20] ;
long long int arr_7 [20] ;
unsigned long long int arr_20 [23] ;
unsigned int arr_4 [20] ;
int arr_5 [20] ;
unsigned int arr_9 [20] ;
unsigned int arr_12 [16] ;
unsigned long long int arr_15 [12] ;
long long int arr_21 [23] [23] ;
unsigned short arr_22 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 14329585068815930091ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1362522988203589654LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 1270624850882291700ULL : 15183432074416931690ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2557470690U : 3595081194U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1791749586 : 15979018;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 1387170390U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 842356889U : 185880085U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 14489344879834032595ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? -7878591838721903938LL : 8114358620564085334LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24256 : (unsigned short)64895;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
