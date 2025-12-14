#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1267262355;
int var_5 = -1584722842;
unsigned short var_6 = (unsigned short)43766;
unsigned int var_7 = 1171917166U;
int var_8 = 1274348394;
short var_12 = (short)-10876;
signed char var_15 = (signed char)-58;
signed char var_16 = (signed char)68;
int var_17 = -1811834053;
int zero = 0;
unsigned short var_19 = (unsigned short)54160;
unsigned short var_20 = (unsigned short)41443;
unsigned short var_21 = (unsigned short)23528;
int var_22 = -427844079;
unsigned short var_23 = (unsigned short)44120;
signed char var_24 = (signed char)-35;
unsigned long long int var_25 = 17514909063472078233ULL;
unsigned short var_26 = (unsigned short)5571;
short arr_6 [11] [11] [11] ;
unsigned short arr_11 [11] [11] ;
unsigned short arr_12 [11] [11] [11] [11] ;
unsigned short arr_13 [14] ;
signed char arr_14 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)13722 : (short)22115;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)18366;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)41619 : (unsigned short)47201;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (unsigned short)55313;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-64;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
