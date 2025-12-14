#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
long long int var_5 = -8194154183755153420LL;
long long int var_7 = -6270553348369812869LL;
unsigned short var_11 = (unsigned short)8129;
unsigned int var_13 = 2586337336U;
unsigned long long int var_14 = 8651792573267929525ULL;
short var_15 = (short)-12005;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 137702766U;
unsigned char var_20 = (unsigned char)130;
unsigned char var_21 = (unsigned char)199;
short var_22 = (short)23694;
signed char var_23 = (signed char)47;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)51169;
int arr_2 [21] ;
_Bool arr_3 [21] ;
unsigned int arr_4 [11] ;
unsigned char arr_5 [11] ;
short arr_6 [11] ;
_Bool arr_9 [11] [11] [11] [11] ;
signed char arr_10 [11] [11] [11] ;
short arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2120815760;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3973129004U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-16849;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (short)12150;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
