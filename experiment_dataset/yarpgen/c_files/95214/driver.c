#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)63;
signed char var_5 = (signed char)-84;
int zero = 0;
signed char var_15 = (signed char)-41;
unsigned long long int var_16 = 8589378404219139440ULL;
signed char var_17 = (signed char)113;
short var_18 = (short)9631;
void init() {
}

void checksum() {
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
