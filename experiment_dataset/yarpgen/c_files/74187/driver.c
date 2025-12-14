#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1815465244000031604LL;
int var_2 = 1664821190;
signed char var_3 = (signed char)127;
unsigned int var_4 = 1263019834U;
unsigned short var_5 = (unsigned short)15097;
int var_6 = -486909352;
signed char var_7 = (signed char)82;
unsigned short var_8 = (unsigned short)10162;
unsigned int var_10 = 568021808U;
long long int var_11 = -5067464898188324283LL;
short var_12 = (short)27829;
int var_13 = 759055640;
unsigned long long int var_14 = 13526157410200329118ULL;
long long int var_15 = 18084860201340074LL;
int zero = 0;
short var_16 = (short)-5288;
unsigned int var_17 = 619670418U;
unsigned short var_18 = (unsigned short)37106;
unsigned int var_19 = 145040738U;
short var_20 = (short)31825;
unsigned int var_21 = 2966502612U;
unsigned int var_22 = 3858950366U;
short var_23 = (short)32339;
signed char var_24 = (signed char)-1;
unsigned short var_25 = (unsigned short)34637;
unsigned long long int var_26 = 1367159289826868950ULL;
long long int arr_0 [13] ;
signed char arr_2 [13] ;
unsigned short arr_3 [13] ;
short arr_6 [18] ;
int arr_7 [18] ;
signed char arr_10 [20] ;
signed char arr_11 [20] ;
short arr_14 [16] ;
int arr_15 [16] [16] ;
long long int arr_4 [13] ;
long long int arr_5 [13] ;
short arr_8 [18] [18] ;
signed char arr_9 [18] ;
unsigned long long int arr_12 [20] [20] ;
short arr_16 [16] ;
short arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -849316754536137802LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)35041;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)-26479;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1248137376;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)-64;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)21643 : (short)-16720;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = 255874705;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 1735976086917089238LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = -530339674286729031LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)2702 : (short)24999;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 11754612288920866614ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-19845 : (short)3714;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-24687 : (short)9718;
}

void checksum() {
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
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
