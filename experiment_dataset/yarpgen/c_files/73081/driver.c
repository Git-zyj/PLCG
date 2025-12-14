#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26222;
short var_1 = (short)-21984;
short var_2 = (short)17811;
signed char var_4 = (signed char)6;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)215;
signed char var_7 = (signed char)29;
short var_8 = (short)18640;
short var_9 = (short)-13728;
unsigned long long int var_10 = 6677661384686130549ULL;
int var_13 = -2145686398;
unsigned int var_14 = 1281060471U;
int var_15 = 2019535005;
signed char var_16 = (signed char)20;
int zero = 0;
int var_17 = 1931790659;
int var_18 = -52253984;
int var_19 = 1557664366;
_Bool var_20 = (_Bool)0;
int var_21 = 275646071;
signed char var_22 = (signed char)32;
unsigned int var_23 = 2280170354U;
short var_24 = (short)-1059;
short var_25 = (short)-27307;
_Bool var_26 = (_Bool)1;
unsigned char var_27 = (unsigned char)105;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-8170;
signed char arr_3 [21] ;
unsigned int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 210652041U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
