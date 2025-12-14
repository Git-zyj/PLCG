#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)112;
signed char var_2 = (signed char)19;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 1442457622U;
short var_15 = (short)29975;
int zero = 0;
short var_17 = (short)22679;
unsigned int var_18 = 4226923366U;
short var_19 = (short)29908;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
