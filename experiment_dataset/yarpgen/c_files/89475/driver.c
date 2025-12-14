#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 203495597U;
unsigned long long int var_17 = 11065406742581224312ULL;
int zero = 0;
unsigned long long int var_19 = 2327963895804560140ULL;
unsigned char var_20 = (unsigned char)68;
unsigned short var_21 = (unsigned short)44122;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
