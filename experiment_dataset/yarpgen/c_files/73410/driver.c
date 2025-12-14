#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1562049801;
long long int var_1 = 8401941350864644925LL;
long long int var_2 = 34114155140646811LL;
_Bool var_3 = (_Bool)0;
int var_4 = -1041246545;
short var_5 = (short)-5208;
short var_6 = (short)5652;
unsigned int var_7 = 1978384290U;
short var_8 = (short)22028;
unsigned short var_9 = (unsigned short)63904;
long long int var_10 = -867803062623135322LL;
int zero = 0;
long long int var_11 = 8682243999179564885LL;
short var_12 = (short)-20824;
unsigned char var_13 = (unsigned char)77;
short var_14 = (short)28663;
short var_15 = (short)2316;
long long int var_16 = -617573796213707645LL;
long long int var_17 = -5448913176964392574LL;
long long int var_18 = -4938717421919730774LL;
int var_19 = -2097251128;
short var_20 = (short)-30897;
long long int var_21 = 2956561127204248407LL;
unsigned long long int var_22 = 9090044568258066513ULL;
short var_23 = (short)15594;
long long int var_24 = 4032918659128571446LL;
short var_25 = (short)1268;
unsigned long long int var_26 = 16778771645075311683ULL;
long long int var_27 = -4187663287788355246LL;
int var_28 = 964455579;
long long int var_29 = 2490388447023116209LL;
long long int var_30 = -8341644442423060209LL;
int var_31 = -33116908;
unsigned long long int var_32 = 13491490808838800856ULL;
unsigned short var_33 = (unsigned short)44145;
unsigned char var_34 = (unsigned char)8;
unsigned char arr_16 [21] ;
unsigned int arr_33 [21] [21] [21] [21] ;
unsigned int arr_43 [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 1483576394U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1552163781U : 2913732206U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
