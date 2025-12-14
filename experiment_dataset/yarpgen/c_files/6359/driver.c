#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1124659798U;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 2469700071U;
signed char var_8 = (signed char)125;
int var_9 = 1154763934;
unsigned long long int var_10 = 16834915862610327876ULL;
signed char var_11 = (signed char)83;
unsigned long long int var_12 = 2060430415825033781ULL;
unsigned short var_13 = (unsigned short)25094;
int zero = 0;
unsigned short var_14 = (unsigned short)63056;
signed char var_15 = (signed char)-29;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-94;
unsigned short var_18 = (unsigned short)32512;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)50;
int var_21 = 1072989728;
unsigned short arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)474;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
