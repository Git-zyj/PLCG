#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 1254965725842848225ULL;
unsigned int var_2 = 1557767943U;
short var_3 = (short)-26842;
unsigned long long int var_4 = 12272840599566337837ULL;
signed char var_6 = (signed char)-48;
int var_7 = -1357339360;
unsigned short var_8 = (unsigned short)38794;
unsigned int var_9 = 2247949160U;
signed char var_11 = (signed char)40;
int zero = 0;
unsigned char var_15 = (unsigned char)161;
signed char var_16 = (signed char)-62;
int var_17 = -737781843;
unsigned short var_18 = (unsigned short)64399;
signed char arr_0 [25] ;
int arr_1 [25] [25] ;
unsigned short arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
unsigned short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-26 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 858037286;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)18036;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3337713982U : 331587637U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20176 : (unsigned short)42501;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
