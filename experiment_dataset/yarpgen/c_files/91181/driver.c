#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4287243197U;
_Bool var_8 = (_Bool)0;
short var_14 = (short)-7357;
int zero = 0;
short var_16 = (short)-10830;
int var_17 = 193638254;
unsigned short var_18 = (unsigned short)35751;
unsigned char var_19 = (unsigned char)116;
int var_20 = 1706068994;
unsigned long long int var_21 = 16375365352067633941ULL;
unsigned int arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2358247271U;
}

void checksum() {
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
