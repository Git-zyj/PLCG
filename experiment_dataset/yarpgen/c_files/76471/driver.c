#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11284533481416189927ULL;
long long int var_2 = -2047720930297973518LL;
short var_3 = (short)-10557;
short var_5 = (short)26443;
int var_6 = -1106865291;
short var_7 = (short)-10850;
long long int var_8 = -6273570961538031365LL;
unsigned long long int var_9 = 4605363020347797023ULL;
short var_10 = (short)7535;
unsigned long long int var_11 = 2780094382372478245ULL;
int var_13 = -1911182571;
int zero = 0;
int var_16 = 868927200;
unsigned int var_17 = 423115887U;
unsigned short var_18 = (unsigned short)62765;
unsigned short var_19 = (unsigned short)64237;
signed char var_20 = (signed char)24;
short var_21 = (short)-9189;
long long int arr_0 [25] [25] ;
short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 977185163719809630LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)16358;
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
