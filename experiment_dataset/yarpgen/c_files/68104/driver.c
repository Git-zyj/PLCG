#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11031385098684119089ULL;
signed char var_4 = (signed char)26;
signed char var_8 = (signed char)58;
unsigned int var_11 = 664608485U;
int zero = 0;
short var_12 = (short)-6652;
short var_13 = (short)4578;
unsigned int var_14 = 1971746226U;
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
