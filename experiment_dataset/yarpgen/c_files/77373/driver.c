#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1701634992U;
unsigned int var_8 = 1127782045U;
long long int var_12 = 4343695269270957205LL;
int zero = 0;
int var_17 = -727894159;
unsigned short var_18 = (unsigned short)12606;
void init() {
}

void checksum() {
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
