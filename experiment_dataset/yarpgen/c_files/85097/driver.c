#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)159;
_Bool var_1 = (_Bool)0;
_Bool var_9 = (_Bool)0;
short var_11 = (short)12147;
int zero = 0;
short var_16 = (short)9088;
int var_17 = -1133006994;
short var_18 = (short)-30889;
unsigned char var_19 = (unsigned char)97;
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
