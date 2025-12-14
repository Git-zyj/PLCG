#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 73361979203991353ULL;
unsigned char var_2 = (unsigned char)232;
unsigned int var_6 = 2680447708U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-20135;
int zero = 0;
signed char var_13 = (signed char)120;
short var_14 = (short)27415;
void init() {
}

void checksum() {
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
