#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63175;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)107;
short var_13 = (short)-29547;
int zero = 0;
short var_14 = (short)-14267;
signed char var_15 = (signed char)120;
signed char var_16 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
