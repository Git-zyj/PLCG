#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3552868633898096100LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)11;
unsigned int var_13 = 1424207021U;
int zero = 0;
int var_14 = -101042571;
long long int var_15 = -2383564633800897082LL;
signed char var_16 = (signed char)69;
int var_17 = 62521779;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
