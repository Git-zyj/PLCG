#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30437;
unsigned char var_1 = (unsigned char)177;
unsigned char var_2 = (unsigned char)82;
signed char var_4 = (signed char)36;
short var_5 = (short)-5961;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)36;
unsigned int var_8 = 3827863972U;
int var_9 = 27019080;
int var_10 = 1929642144;
long long int var_12 = 1002472768586619309LL;
unsigned int var_13 = 2329099809U;
unsigned char var_14 = (unsigned char)88;
unsigned int var_15 = 1695909389U;
int zero = 0;
unsigned char var_16 = (unsigned char)63;
int var_17 = 408104862;
signed char var_18 = (signed char)41;
long long int var_19 = 5234016009806141120LL;
short var_20 = (short)14765;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3019412863U;
long long int arr_0 [12] [12] ;
int arr_1 [12] [12] ;
unsigned short arr_2 [16] ;
long long int arr_3 [16] [16] ;
unsigned long long int arr_4 [16] [16] ;
signed char arr_5 [16] [16] ;
signed char arr_6 [16] ;
short arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 7810659231783020562LL : 3621246100302905411LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 1608475913 : -1352143896;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)643;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 4915375614146780186LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 17956052425957897053ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)-10476;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
