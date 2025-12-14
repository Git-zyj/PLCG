#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12103906379932683111ULL;
unsigned int var_1 = 677562191U;
unsigned int var_2 = 930898353U;
unsigned int var_4 = 2985050677U;
unsigned int var_5 = 2068239049U;
unsigned long long int var_6 = 11537855290513638232ULL;
unsigned long long int var_7 = 9339713155706172705ULL;
unsigned int var_10 = 1302777315U;
unsigned int var_11 = 3884863506U;
int zero = 0;
unsigned long long int var_13 = 3112364909880615137ULL;
unsigned int var_14 = 936102397U;
unsigned int var_15 = 2326721302U;
unsigned int var_16 = 3073965000U;
unsigned long long int var_17 = 7080047800540953842ULL;
unsigned long long int var_18 = 14292711622237010610ULL;
unsigned long long int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 9759065615056949332ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
