#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17117580036479201513ULL;
short var_5 = (short)-5822;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3102286806U;
signed char var_8 = (signed char)44;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1747159868U;
int zero = 0;
signed char var_14 = (signed char)19;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 251982635U;
unsigned int var_17 = 1009702629U;
short var_18 = (short)22036;
unsigned int var_19 = 648408650U;
short var_20 = (short)-23333;
int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 312571626;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
