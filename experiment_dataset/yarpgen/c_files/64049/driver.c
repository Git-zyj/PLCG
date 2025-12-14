#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 35180772U;
short var_6 = (short)19681;
unsigned long long int var_9 = 3824332694997200527ULL;
int zero = 0;
short var_15 = (short)-5382;
long long int var_16 = -4539185563556511302LL;
unsigned short var_17 = (unsigned short)57205;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
