#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31236;
int var_2 = 1667586853;
unsigned char var_3 = (unsigned char)165;
short var_4 = (short)-8814;
short var_7 = (short)17230;
short var_8 = (short)21134;
unsigned char var_9 = (unsigned char)53;
unsigned short var_10 = (unsigned short)10760;
unsigned char var_12 = (unsigned char)43;
int var_14 = -230641972;
unsigned short var_15 = (unsigned short)47490;
unsigned char var_16 = (unsigned char)143;
short var_17 = (short)20028;
int zero = 0;
short var_20 = (short)29565;
short var_21 = (short)-17529;
short var_22 = (short)-4774;
short var_23 = (short)-20249;
int var_24 = -1148648456;
unsigned char var_25 = (unsigned char)60;
unsigned char var_26 = (unsigned char)58;
unsigned int var_27 = 1557599128U;
unsigned char var_28 = (unsigned char)79;
unsigned char var_29 = (unsigned char)80;
unsigned int var_30 = 332215970U;
unsigned char var_31 = (unsigned char)77;
short arr_5 [14] [14] [14] ;
short arr_10 [16] ;
unsigned short arr_11 [16] ;
unsigned short arr_13 [16] ;
unsigned int arr_14 [16] ;
unsigned short arr_15 [16] [16] ;
unsigned char arr_8 [14] ;
unsigned short arr_9 [14] [14] ;
unsigned char arr_12 [16] [16] ;
short arr_16 [16] [16] ;
short arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-18632;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (short)27115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)22365;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15514 : (unsigned short)60525;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2490883037U : 1651823881U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)4874 : (unsigned short)34624;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)2466;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-5121 : (short)-14546;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-29796 : (short)32719;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
