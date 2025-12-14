#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3256670613169777009ULL;
signed char var_5 = (signed char)-102;
long long int var_9 = 8516159580909956128LL;
unsigned short var_12 = (unsigned short)53553;
long long int var_14 = -152456308696885171LL;
int zero = 0;
short var_15 = (short)6917;
unsigned short var_16 = (unsigned short)2876;
void init() {
}

void checksum() {
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
