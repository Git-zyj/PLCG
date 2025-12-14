#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3640843955U;
signed char var_1 = (signed char)71;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)14;
unsigned int var_5 = 2971342437U;
short var_6 = (short)-10984;
_Bool var_7 = (_Bool)0;
int var_8 = -782299597;
unsigned int var_9 = 90935526U;
int zero = 0;
short var_12 = (short)-12130;
unsigned char var_13 = (unsigned char)176;
int var_14 = 1394122404;
short var_15 = (short)-26505;
unsigned int var_16 = 3101931919U;
unsigned short var_17 = (unsigned short)15392;
unsigned short var_18 = (unsigned short)52344;
unsigned int var_19 = 1697316881U;
unsigned int var_20 = 1195558851U;
unsigned int var_21 = 1904861164U;
short arr_0 [13] ;
int arr_1 [13] ;
int arr_2 [13] ;
unsigned char arr_3 [13] ;
int arr_5 [13] [13] ;
unsigned short arr_4 [13] ;
unsigned char arr_8 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-6116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1954558834;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1057388272;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -1827824048;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)43691;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)226;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
