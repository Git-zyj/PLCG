#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64497;
long long int var_1 = 7967201129403184053LL;
unsigned int var_2 = 1464425955U;
unsigned long long int var_7 = 12886451159750667416ULL;
int var_8 = 221248052;
unsigned long long int var_13 = 8062116067342620944ULL;
int var_16 = -1560394304;
int zero = 0;
long long int var_18 = 3552796228542995973LL;
short var_19 = (short)-23939;
unsigned char var_20 = (unsigned char)218;
int arr_0 [18] ;
unsigned short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 730118954;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)58842;
}

void checksum() {
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
