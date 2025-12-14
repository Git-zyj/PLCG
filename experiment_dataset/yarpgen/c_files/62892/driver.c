#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_7 = (unsigned short)24135;
signed char var_11 = (signed char)23;
int zero = 0;
unsigned char var_14 = (unsigned char)78;
unsigned long long int var_15 = 5237653201097599989ULL;
int var_16 = -691449456;
signed char var_17 = (signed char)-58;
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
