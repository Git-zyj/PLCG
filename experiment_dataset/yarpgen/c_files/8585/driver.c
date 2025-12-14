#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -56436951;
_Bool var_3 = (_Bool)0;
long long int var_6 = 545772220722001668LL;
unsigned short var_7 = (unsigned short)36943;
signed char var_9 = (signed char)95;
long long int var_10 = -4960046940449279676LL;
int zero = 0;
unsigned char var_11 = (unsigned char)217;
unsigned char var_12 = (unsigned char)55;
int var_13 = 1159010617;
signed char var_14 = (signed char)95;
_Bool var_15 = (_Bool)0;
int var_16 = -1772789630;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)45;
unsigned int var_19 = 186667308U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)60;
int var_22 = 119814600;
int var_23 = 2015338145;
_Bool var_24 = (_Bool)1;
signed char var_25 = (signed char)72;
int var_26 = -1893504800;
long long int arr_9 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1669031856124173315LL : -2278877090301318995LL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
