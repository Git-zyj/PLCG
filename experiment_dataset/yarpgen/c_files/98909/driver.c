#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 185043649;
unsigned short var_1 = (unsigned short)46889;
unsigned int var_8 = 2748997337U;
unsigned short var_9 = (unsigned short)35615;
unsigned int var_10 = 2087467196U;
int zero = 0;
unsigned short var_16 = (unsigned short)26822;
int var_17 = -1751716260;
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
