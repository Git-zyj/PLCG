#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -651123697;
unsigned int var_1 = 3939103925U;
short var_4 = (short)23721;
unsigned char var_5 = (unsigned char)110;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)44162;
unsigned short var_11 = (unsigned short)31105;
unsigned long long int var_14 = 1774733661452062620ULL;
unsigned short var_15 = (unsigned short)58882;
unsigned short var_16 = (unsigned short)19797;
unsigned short var_18 = (unsigned short)64300;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2868048062U;
unsigned long long int var_23 = 17910326469994417351ULL;
_Bool var_24 = (_Bool)1;
short var_25 = (short)-13032;
unsigned int var_26 = 2233142901U;
unsigned short var_27 = (unsigned short)55682;
int var_28 = -1721369544;
unsigned char arr_1 [12] ;
unsigned char arr_2 [12] ;
unsigned short arr_7 [12] [12] [12] ;
unsigned short arr_9 [19] ;
unsigned int arr_10 [19] [19] ;
int arr_11 [19] ;
short arr_15 [18] ;
int arr_12 [19] [19] ;
unsigned char arr_17 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)65157 : (unsigned short)10679;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)1553;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 1962666657U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = -426259388;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (short)-18096;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 1125156040;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned char)150;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
