#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
long long int var_1 = 4868704677667083569LL;
unsigned char var_3 = (unsigned char)224;
unsigned char var_4 = (unsigned char)221;
unsigned char var_5 = (unsigned char)246;
long long int var_8 = 944438839596658194LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)25;
short var_11 = (short)-8335;
unsigned char var_12 = (unsigned char)15;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 661596257U;
signed char var_17 = (signed char)-101;
int zero = 0;
int var_18 = 2075304812;
long long int var_19 = -2649431149436032646LL;
unsigned char var_20 = (unsigned char)111;
int var_21 = 803342594;
unsigned char var_22 = (unsigned char)77;
unsigned char var_23 = (unsigned char)218;
long long int var_24 = 217241803376508528LL;
unsigned char var_25 = (unsigned char)82;
long long int var_26 = 8294551796489269721LL;
int var_27 = -784131017;
unsigned int arr_4 [14] ;
unsigned char arr_11 [21] ;
signed char arr_12 [21] [21] ;
unsigned char arr_13 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 2712391116U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)211 : (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)123 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)238 : (unsigned char)45;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
