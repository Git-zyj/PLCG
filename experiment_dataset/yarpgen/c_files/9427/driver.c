#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1882475185;
unsigned char var_3 = (unsigned char)179;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3921508571U;
unsigned long long int var_7 = 1017111553806195125ULL;
int var_8 = -1235709087;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 268591714U;
unsigned char var_11 = (unsigned char)179;
unsigned int var_14 = 123805647U;
int var_15 = -1380686369;
unsigned short var_16 = (unsigned short)60411;
int zero = 0;
short var_17 = (short)20271;
unsigned char var_18 = (unsigned char)58;
unsigned char arr_3 [16] [16] ;
int arr_4 [16] ;
unsigned int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -835561676;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 824793700U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
