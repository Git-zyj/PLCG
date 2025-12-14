#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned int var_1 = 1377918625U;
long long int var_2 = 5045571144935943749LL;
long long int var_3 = -2604650663048747183LL;
long long int var_4 = 697944391562105859LL;
short var_6 = (short)-13359;
unsigned int var_8 = 1907608931U;
unsigned long long int var_9 = 6826303870644256079ULL;
_Bool var_10 = (_Bool)0;
long long int var_11 = -5626712803399636010LL;
unsigned int var_12 = 3724054127U;
short var_13 = (short)19934;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3499356714U;
long long int var_16 = -1062126092548814875LL;
int zero = 0;
long long int var_17 = -6775798371537500178LL;
long long int var_18 = 9115532002154422413LL;
long long int var_19 = 3484946931716220693LL;
unsigned int var_20 = 4003321485U;
unsigned int var_21 = 2303530100U;
unsigned char var_22 = (unsigned char)201;
long long int var_23 = -7693673653618439865LL;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)80;
short arr_3 [15] ;
long long int arr_7 [22] ;
short arr_11 [16] ;
long long int arr_12 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)14819;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -1955989290447959471LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (short)5184;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = -1825511707871291207LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
