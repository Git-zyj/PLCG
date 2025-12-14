#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
long long int var_4 = -1168071408228245317LL;
signed char var_11 = (signed char)53;
short var_16 = (short)8795;
int zero = 0;
unsigned short var_17 = (unsigned short)51139;
long long int var_18 = -1886849381444071929LL;
long long int var_19 = 8665152572555991722LL;
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
