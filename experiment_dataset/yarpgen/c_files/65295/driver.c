#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5448;
signed char var_11 = (signed char)105;
unsigned long long int var_12 = 7077712379943005474ULL;
unsigned char var_13 = (unsigned char)167;
int zero = 0;
unsigned char var_15 = (unsigned char)165;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)4;
void init() {
}

void checksum() {
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
