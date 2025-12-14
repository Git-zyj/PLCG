#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2392803670U;
long long int var_7 = -3143240118947739072LL;
unsigned char var_10 = (unsigned char)71;
long long int var_12 = 5619483252261995778LL;
int zero = 0;
signed char var_16 = (signed char)118;
unsigned int var_17 = 533408886U;
unsigned short var_18 = (unsigned short)24268;
unsigned short var_19 = (unsigned short)33898;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
