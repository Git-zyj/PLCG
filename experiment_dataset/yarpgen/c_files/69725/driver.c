#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11097;
unsigned int var_1 = 744221311U;
unsigned short var_3 = (unsigned short)9168;
unsigned int var_4 = 2020548580U;
short var_5 = (short)12042;
short var_6 = (short)7099;
unsigned char var_7 = (unsigned char)158;
unsigned short var_8 = (unsigned short)42560;
unsigned int var_9 = 2836531245U;
unsigned int var_11 = 3743930412U;
int zero = 0;
int var_12 = -302815864;
unsigned short var_13 = (unsigned short)51295;
short var_14 = (short)-29494;
unsigned int var_15 = 3983356158U;
unsigned int var_16 = 230401985U;
unsigned int var_17 = 2986518226U;
unsigned int var_18 = 3922163529U;
unsigned char var_19 = (unsigned char)250;
short var_20 = (short)21920;
short var_21 = (short)-20246;
_Bool var_22 = (_Bool)1;
short var_23 = (short)6388;
unsigned short var_24 = (unsigned short)43207;
short var_25 = (short)-17186;
unsigned long long int var_26 = 13780651081543918570ULL;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)6736;
unsigned int arr_0 [23] ;
short arr_1 [23] [23] ;
_Bool arr_2 [23] ;
signed char arr_4 [25] ;
unsigned short arr_5 [25] [25] ;
unsigned short arr_12 [18] [18] ;
unsigned short arr_13 [18] ;
unsigned int arr_14 [18] [18] [18] ;
unsigned short arr_17 [18] [18] [18] ;
unsigned int arr_3 [23] ;
short arr_6 [25] ;
_Bool arr_18 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1072545662U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-22876;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)31671;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)35138;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (unsigned short)2578;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1338696957U : 1733083820U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)4066;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 229401588U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)15076;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
