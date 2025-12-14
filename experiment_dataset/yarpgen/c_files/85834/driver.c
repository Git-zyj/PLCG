#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 66452800617066089LL;
signed char var_1 = (signed char)49;
signed char var_9 = (signed char)30;
int zero = 0;
short var_16 = (short)-18463;
short var_17 = (short)-1184;
unsigned long long int var_18 = 8694134347309729507ULL;
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
