#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)244;
unsigned short var_3 = (unsigned short)48527;
unsigned short var_5 = (unsigned short)23328;
unsigned char var_7 = (unsigned char)196;
unsigned short var_12 = (unsigned short)47098;
int zero = 0;
unsigned char var_15 = (unsigned char)89;
unsigned short var_16 = (unsigned short)36516;
unsigned char var_17 = (unsigned char)17;
unsigned short var_18 = (unsigned short)6659;
unsigned char var_19 = (unsigned char)137;
unsigned short var_20 = (unsigned short)34379;
unsigned short var_21 = (unsigned short)19635;
unsigned short var_22 = (unsigned short)24607;
unsigned char var_23 = (unsigned char)249;
unsigned char var_24 = (unsigned char)141;
unsigned char var_25 = (unsigned char)134;
unsigned char var_26 = (unsigned char)229;
unsigned short var_27 = (unsigned short)34280;
unsigned char var_28 = (unsigned char)121;
unsigned short arr_0 [19] ;
unsigned short arr_2 [19] ;
unsigned char arr_3 [19] [19] ;
unsigned char arr_4 [19] ;
unsigned char arr_14 [22] [22] ;
unsigned short arr_15 [22] ;
unsigned short arr_16 [22] ;
unsigned short arr_10 [19] [19] ;
unsigned char arr_11 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)62868;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)27235;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)127 : (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned short)40117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned short)46058;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)2278 : (unsigned short)24288;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)73 : (unsigned char)142;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
