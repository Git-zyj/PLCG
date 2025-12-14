#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)235;
unsigned long long int var_7 = 17337203726326681770ULL;
_Bool var_9 = (_Bool)1;
signed char var_14 = (signed char)84;
int zero = 0;
unsigned int var_16 = 273151441U;
unsigned int var_17 = 737214931U;
signed char var_18 = (signed char)108;
void init() {
}

void checksum() {
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
