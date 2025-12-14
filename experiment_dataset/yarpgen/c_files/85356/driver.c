#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
long long int var_1 = 1703349910232295941LL;
signed char var_2 = (signed char)-49;
unsigned char var_3 = (unsigned char)242;
long long int var_4 = 1391571862090525255LL;
unsigned char var_5 = (unsigned char)232;
short var_6 = (short)29067;
signed char var_7 = (signed char)-42;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 11243028367782216154ULL;
unsigned long long int var_10 = 15147741309066975235ULL;
long long int var_12 = 724164082082564798LL;
unsigned long long int var_13 = 9939800817684296521ULL;
unsigned char var_14 = (unsigned char)243;
int zero = 0;
unsigned char var_15 = (unsigned char)65;
unsigned long long int var_16 = 2938138914216328629ULL;
unsigned char var_17 = (unsigned char)197;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)170;
int var_20 = 1269898067;
unsigned char var_21 = (unsigned char)82;
unsigned int var_22 = 702643629U;
short var_23 = (short)31944;
unsigned long long int var_24 = 16391512155800697960ULL;
short arr_2 [20] [20] ;
signed char arr_3 [20] ;
signed char arr_13 [16] [16] [16] [16] [16] [16] ;
long long int arr_14 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-19039;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)121 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1450169262014471041LL : -7365048588633474378LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
