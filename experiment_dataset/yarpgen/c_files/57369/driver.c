#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2859823450U;
long long int var_9 = 2215308643913067848LL;
unsigned int var_10 = 957945864U;
signed char var_14 = (signed char)91;
int zero = 0;
short var_16 = (short)-11158;
unsigned int var_17 = 3394327079U;
unsigned char var_18 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
