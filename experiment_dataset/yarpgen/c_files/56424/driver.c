#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -135971157;
unsigned char var_7 = (unsigned char)238;
int var_8 = 679652237;
unsigned long long int var_10 = 8776335193879303767ULL;
unsigned long long int var_13 = 12021362553261532549ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)6;
void init() {
}

void checksum() {
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
