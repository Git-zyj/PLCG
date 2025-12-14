#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11353722005279317777ULL;
signed char var_4 = (signed char)-78;
unsigned int var_8 = 1140064168U;
short var_9 = (short)-31404;
signed char var_14 = (signed char)-101;
int zero = 0;
unsigned char var_16 = (unsigned char)252;
unsigned short var_17 = (unsigned short)27008;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
