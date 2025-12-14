#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49248;
short var_10 = (short)-7469;
short var_16 = (short)-16986;
int zero = 0;
unsigned long long int var_18 = 3594326047037592610ULL;
signed char var_19 = (signed char)87;
unsigned short var_20 = (unsigned short)18177;
void init() {
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
