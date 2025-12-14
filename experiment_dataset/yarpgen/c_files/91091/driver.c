#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60769;
signed char var_1 = (signed char)-35;
long long int var_2 = 849391199957519726LL;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)4453;
unsigned int var_8 = 97651766U;
signed char var_9 = (signed char)-91;
unsigned int var_12 = 988331323U;
_Bool var_13 = (_Bool)1;
long long int var_14 = -7484782177259539284LL;
short var_15 = (short)22028;
int var_16 = -1886691893;
int zero = 0;
long long int var_17 = 868973541623977265LL;
signed char var_18 = (signed char)-100;
unsigned char var_19 = (unsigned char)84;
unsigned char var_20 = (unsigned char)11;
signed char var_21 = (signed char)100;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-8770;
unsigned char var_24 = (unsigned char)119;
long long int var_25 = -4006875975751260550LL;
unsigned short var_26 = (unsigned short)26093;
signed char arr_0 [12] ;
unsigned char arr_3 [16] ;
long long int arr_4 [16] ;
signed char arr_7 [16] [16] ;
signed char arr_8 [16] ;
unsigned long long int arr_9 [16] [16] [16] ;
unsigned char arr_11 [16] [16] ;
signed char arr_2 [12] ;
unsigned int arr_10 [16] [16] [16] ;
unsigned char arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)64;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 9020951537598722544LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1074704313572180594ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1422818108U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (unsigned char)197;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
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
