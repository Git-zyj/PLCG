#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1525863769102554396LL;
unsigned int var_1 = 2609044248U;
short var_4 = (short)11845;
short var_5 = (short)-30519;
short var_7 = (short)28813;
short var_11 = (short)-1114;
int zero = 0;
short var_14 = (short)-19952;
unsigned long long int var_15 = 8897819805979727436ULL;
unsigned char var_16 = (unsigned char)138;
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
