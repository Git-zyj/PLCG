#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17538;
int var_4 = -711363634;
signed char var_6 = (signed char)-121;
long long int var_7 = 5408222097426216227LL;
unsigned long long int var_9 = 849496069995980052ULL;
signed char var_13 = (signed char)111;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2435628968U;
unsigned int var_16 = 693165933U;
unsigned int var_17 = 3481731363U;
unsigned int var_18 = 1417230813U;
short var_19 = (short)-23117;
int var_20 = -2116026751;
unsigned int var_21 = 4010074213U;
int var_22 = 1660754525;
signed char var_23 = (signed char)-85;
short arr_0 [24] [24] ;
signed char arr_1 [24] ;
long long int arr_6 [13] ;
short arr_12 [19] [19] [19] ;
unsigned char arr_4 [24] [24] ;
_Bool arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)2528;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -3791259422515159543LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-7878;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)155 : (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
