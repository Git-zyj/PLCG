#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)364;
short var_5 = (short)28654;
signed char var_9 = (signed char)31;
int zero = 0;
unsigned short var_10 = (unsigned short)19900;
unsigned int var_11 = 3403861192U;
unsigned long long int var_12 = 1925812034607818822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
