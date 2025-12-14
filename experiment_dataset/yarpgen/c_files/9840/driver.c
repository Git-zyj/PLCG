#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33745;
unsigned int var_3 = 308985589U;
long long int var_4 = 202488457692521842LL;
unsigned char var_5 = (unsigned char)159;
signed char var_8 = (signed char)-94;
unsigned char var_12 = (unsigned char)144;
_Bool var_13 = (_Bool)0;
int var_15 = -1850804064;
unsigned short var_17 = (unsigned short)42116;
unsigned short var_18 = (unsigned short)26774;
int zero = 0;
unsigned int var_19 = 2881676804U;
signed char var_20 = (signed char)109;
long long int var_21 = 3194794034363910488LL;
short var_22 = (short)-1541;
unsigned int var_23 = 1804114288U;
unsigned char var_24 = (unsigned char)150;
signed char var_25 = (signed char)-66;
long long int var_26 = 8644945247264118273LL;
unsigned short var_27 = (unsigned short)22591;
long long int var_28 = 4568181754660177560LL;
long long int var_29 = -1879762636577330095LL;
signed char var_30 = (signed char)-48;
unsigned int var_31 = 1923850284U;
unsigned char var_32 = (unsigned char)87;
unsigned int var_33 = 4132457033U;
long long int var_34 = -7998560495401211931LL;
unsigned short var_35 = (unsigned short)3907;
signed char var_36 = (signed char)-111;
unsigned char arr_0 [15] [15] ;
long long int arr_2 [15] ;
unsigned int arr_3 [15] ;
unsigned short arr_7 [15] [15] [15] [15] ;
_Bool arr_11 [14] [14] ;
long long int arr_12 [14] ;
unsigned short arr_14 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 6250500785157521266LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 711083942U : 3878550581U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)33848;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -6475399799793007328LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)3897;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
