#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9558703871421973012ULL;
short var_1 = (short)11268;
unsigned short var_2 = (unsigned short)53332;
unsigned int var_3 = 2828643584U;
unsigned int var_5 = 3957620939U;
int var_6 = 965076234;
unsigned int var_7 = 1314934617U;
unsigned int var_8 = 1064267749U;
unsigned short var_9 = (unsigned short)35613;
unsigned char var_10 = (unsigned char)111;
int var_11 = 963964167;
int zero = 0;
unsigned int var_12 = 139460020U;
int var_13 = 2046549077;
int var_14 = -1910348748;
int var_15 = -203174584;
short var_16 = (short)-23424;
unsigned char var_17 = (unsigned char)167;
unsigned char var_18 = (unsigned char)66;
unsigned char var_19 = (unsigned char)248;
unsigned int var_20 = 3454747858U;
unsigned short var_21 = (unsigned short)13776;
signed char var_22 = (signed char)25;
int var_23 = 1020054409;
unsigned int var_24 = 1443570177U;
signed char var_25 = (signed char)-104;
unsigned long long int var_26 = 9556531109827594144ULL;
int var_27 = 347413765;
unsigned char var_28 = (unsigned char)99;
int var_29 = 1153678925;
signed char var_30 = (signed char)-50;
unsigned short arr_11 [23] [23] ;
signed char arr_23 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)17428;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-39 : (signed char)-107;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
