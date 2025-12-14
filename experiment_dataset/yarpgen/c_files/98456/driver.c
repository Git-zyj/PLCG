#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32175;
short var_1 = (short)24827;
short var_2 = (short)-24638;
short var_3 = (short)6556;
short var_4 = (short)12685;
short var_5 = (short)7140;
short var_6 = (short)24223;
short var_7 = (short)7125;
short var_8 = (short)23727;
int zero = 0;
short var_11 = (short)-20071;
short var_12 = (short)20868;
short var_13 = (short)-16777;
short var_14 = (short)887;
short var_15 = (short)25298;
short var_16 = (short)-20269;
short var_17 = (short)-18213;
short var_18 = (short)-6528;
short var_19 = (short)-9270;
short var_20 = (short)13770;
short var_21 = (short)-27159;
short var_22 = (short)-17302;
short var_23 = (short)21335;
short var_24 = (short)-26085;
short arr_3 [11] [11] ;
short arr_6 [15] ;
short arr_7 [15] ;
short arr_8 [15] [15] ;
short arr_9 [15] [15] [15] ;
short arr_10 [15] ;
short arr_12 [15] [15] [15] [15] [15] ;
short arr_13 [15] [15] [15] ;
short arr_16 [15] [15] ;
short arr_18 [15] ;
short arr_5 [11] ;
short arr_19 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-3639;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)-6894;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-10438;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-3208;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)3895;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)16356;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)26732;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-18401;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-16796;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)-25312 : (short)-9738;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)15424;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (short)25948 : (short)28800;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
