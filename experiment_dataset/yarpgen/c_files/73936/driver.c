#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1622323682543607275ULL;
unsigned short var_8 = (unsigned short)44604;
short var_12 = (short)-3177;
long long int var_13 = -4351799643878705100LL;
int zero = 0;
unsigned int var_14 = 1193528769U;
short var_15 = (short)32418;
unsigned int var_16 = 2994318083U;
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
