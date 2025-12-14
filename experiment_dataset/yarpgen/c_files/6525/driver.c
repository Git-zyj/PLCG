#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-17929;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1635845449U;
unsigned long long int var_8 = 5182484363347730484ULL;
unsigned long long int var_10 = 550878765030124684ULL;
int zero = 0;
short var_12 = (short)-31594;
signed char var_13 = (signed char)65;
unsigned long long int var_14 = 5481564450307896001ULL;
int var_15 = -1173390346;
signed char var_16 = (signed char)-108;
unsigned short var_17 = (unsigned short)61752;
unsigned long long int arr_1 [24] ;
_Bool arr_2 [24] [24] [24] ;
_Bool arr_17 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 15083606983266422703ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
