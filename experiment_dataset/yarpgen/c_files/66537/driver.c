#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
unsigned int var_7 = 4226300473U;
unsigned long long int var_9 = 1642164206116579512ULL;
unsigned int var_11 = 4114253632U;
signed char var_14 = (signed char)-10;
long long int var_15 = -4370470737356208729LL;
int zero = 0;
short var_16 = (short)24638;
short var_17 = (short)9420;
unsigned short var_18 = (unsigned short)8540;
signed char var_19 = (signed char)(-127 - 1);
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
