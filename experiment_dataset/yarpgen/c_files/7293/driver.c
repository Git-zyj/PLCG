#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1513591598U;
unsigned int var_3 = 68161591U;
unsigned short var_9 = (unsigned short)61281;
int zero = 0;
unsigned long long int var_14 = 15638111866121838662ULL;
signed char var_15 = (signed char)62;
unsigned char var_16 = (unsigned char)209;
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
