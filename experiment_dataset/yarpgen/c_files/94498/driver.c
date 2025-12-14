#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12550;
short var_2 = (short)2079;
short var_5 = (short)-26410;
unsigned char var_8 = (unsigned char)213;
unsigned long long int var_9 = 18326682759505121488ULL;
unsigned short var_10 = (unsigned short)49772;
unsigned short var_12 = (unsigned short)27353;
int zero = 0;
signed char var_13 = (signed char)103;
unsigned short var_14 = (unsigned short)52284;
unsigned short var_15 = (unsigned short)14018;
unsigned long long int var_16 = 898403414254526244ULL;
unsigned char var_17 = (unsigned char)147;
long long int var_18 = 3025982403673861142LL;
unsigned long long int var_19 = 7993036077813998747ULL;
unsigned long long int var_20 = 7629235416789800371ULL;
unsigned long long int var_21 = 8070659254483075440ULL;
unsigned long long int var_22 = 8833861371271362033ULL;
short var_23 = (short)588;
unsigned long long int var_24 = 25198737461115459ULL;
signed char arr_6 [14] ;
long long int arr_12 [14] [14] [14] [14] [14] ;
long long int arr_15 [14] ;
unsigned long long int arr_16 [14] [14] ;
short arr_19 [14] ;
long long int arr_20 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -6118118429714894376LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = 6057272682704313683LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = 6732007914378329430ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (short)-6173;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 3484996541637339876LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
