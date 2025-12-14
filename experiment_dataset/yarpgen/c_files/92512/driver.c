#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1366700897671797131LL;
short var_2 = (short)-32657;
unsigned long long int var_9 = 16843841521889167354ULL;
int zero = 0;
short var_15 = (short)-16674;
unsigned int var_16 = 4166010364U;
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
