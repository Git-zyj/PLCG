#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -244550924;
unsigned long long int var_5 = 15240755100070872983ULL;
unsigned short var_7 = (unsigned short)12042;
signed char var_8 = (signed char)52;
short var_10 = (short)-31913;
unsigned int var_12 = 1927076995U;
long long int var_14 = -3599012573362394252LL;
int var_15 = 1678159928;
signed char var_17 = (signed char)65;
int zero = 0;
unsigned int var_18 = 2538738733U;
long long int var_19 = -5945008298163883092LL;
unsigned int var_20 = 1212309631U;
long long int var_21 = -900278496679150100LL;
signed char var_22 = (signed char)-57;
long long int arr_2 [11] [11] ;
long long int arr_6 [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2643264572077492684LL : 7458155776584790836LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -5244352344090692574LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 17798044089936507070ULL : 3512038313644725418ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
