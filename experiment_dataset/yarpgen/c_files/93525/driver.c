#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42064;
unsigned long long int var_2 = 14715142808562272982ULL;
int var_3 = 79080643;
int var_5 = 2017997354;
unsigned short var_10 = (unsigned short)9048;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-23115;
unsigned char var_14 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
