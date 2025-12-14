#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)188;
long long int var_13 = -2623224092874481315LL;
unsigned int var_15 = 890080491U;
unsigned char var_16 = (unsigned char)74;
int zero = 0;
signed char var_18 = (signed char)-84;
short var_19 = (short)-26233;
void init() {
}

void checksum() {
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
