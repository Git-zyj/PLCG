#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3456052266U;
signed char var_6 = (signed char)34;
signed char var_7 = (signed char)-9;
unsigned int var_12 = 222057326U;
unsigned int var_13 = 3085361406U;
int zero = 0;
unsigned int var_14 = 1360051261U;
unsigned int var_15 = 1403888211U;
unsigned int var_16 = 4002617999U;
unsigned int var_17 = 354856049U;
unsigned int var_18 = 1658960217U;
unsigned int var_19 = 3277061052U;
unsigned int var_20 = 373128317U;
unsigned int arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 765375758U;
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
