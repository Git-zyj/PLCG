#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16282;
short var_3 = (short)7073;
int var_6 = 1520286690;
unsigned int var_8 = 3318007677U;
int zero = 0;
unsigned int var_12 = 1080056106U;
unsigned long long int var_13 = 1560864014549348228ULL;
unsigned char var_14 = (unsigned char)111;
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
