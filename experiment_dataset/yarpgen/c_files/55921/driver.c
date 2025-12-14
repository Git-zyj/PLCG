#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1019305877U;
long long int var_1 = 2252936448600578536LL;
unsigned long long int var_2 = 9873206726496983107ULL;
signed char var_3 = (signed char)127;
unsigned long long int var_4 = 107487850513060670ULL;
unsigned char var_5 = (unsigned char)63;
short var_6 = (short)-18440;
unsigned char var_7 = (unsigned char)69;
signed char var_8 = (signed char)-103;
long long int var_9 = 2129694057676227876LL;
unsigned int var_10 = 4149343488U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_15 = -5482626333824594930LL;
signed char var_16 = (signed char)35;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)35478;
unsigned short var_20 = (unsigned short)4011;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)36;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 4191080614U;
unsigned long long int var_25 = 7219714587332654206ULL;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)39;
signed char var_28 = (signed char)-78;
unsigned char var_29 = (unsigned char)35;
signed char arr_0 [25] ;
long long int arr_3 [25] ;
unsigned char arr_5 [25] [25] [25] ;
unsigned char arr_6 [25] [25] ;
unsigned int arr_12 [18] ;
unsigned char arr_14 [18] [18] [18] ;
long long int arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 9863834455171121LL : -7862332187494700622LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)183 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 1951844138U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)212 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1288010862598434862LL : 2799998373208419473LL;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
