#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8168984614341652904LL;
long long int var_6 = -2548501084938151863LL;
signed char var_8 = (signed char)-24;
int var_14 = -545694832;
unsigned long long int var_15 = 1445495701146818348ULL;
unsigned short var_16 = (unsigned short)24347;
int zero = 0;
unsigned short var_17 = (unsigned short)51384;
signed char var_18 = (signed char)82;
void init() {
}

void checksum() {
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
