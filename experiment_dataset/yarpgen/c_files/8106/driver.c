#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)14;
unsigned char var_3 = (unsigned char)176;
signed char var_5 = (signed char)55;
signed char var_9 = (signed char)-51;
unsigned short var_11 = (unsigned short)2423;
unsigned short var_12 = (unsigned short)32032;
unsigned short var_13 = (unsigned short)7087;
unsigned short var_14 = (unsigned short)28429;
int zero = 0;
signed char var_15 = (signed char)-59;
unsigned char var_16 = (unsigned char)18;
signed char var_17 = (signed char)117;
signed char var_18 = (signed char)89;
unsigned short var_19 = (unsigned short)40461;
unsigned char var_20 = (unsigned char)68;
signed char var_21 = (signed char)-40;
unsigned char var_22 = (unsigned char)123;
unsigned char var_23 = (unsigned char)247;
unsigned short var_24 = (unsigned short)22979;
unsigned short var_25 = (unsigned short)61009;
signed char var_26 = (signed char)-35;
unsigned short arr_0 [15] ;
unsigned short arr_1 [15] ;
signed char arr_2 [15] ;
unsigned short arr_3 [15] ;
unsigned short arr_7 [15] ;
unsigned short arr_10 [15] [15] [15] [15] ;
unsigned short arr_12 [23] ;
unsigned short arr_13 [23] [23] ;
signed char arr_14 [23] [23] [23] ;
unsigned short arr_19 [23] [23] [23] [23] ;
unsigned short arr_21 [23] [23] [23] [23] ;
unsigned char arr_24 [23] [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)40305;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)37905;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)63525;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27045 : (unsigned short)5146;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)26049 : (unsigned short)64692;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned short)39591;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)6750;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47229;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)39094;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)66;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
