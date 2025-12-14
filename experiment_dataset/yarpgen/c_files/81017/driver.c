#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26733;
int var_4 = -931898705;
int var_6 = -824448222;
int var_10 = 1300936079;
int zero = 0;
unsigned char var_13 = (unsigned char)214;
unsigned int var_14 = 275530079U;
unsigned int var_15 = 62460190U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
