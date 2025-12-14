#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3454038288U;
unsigned char var_6 = (unsigned char)91;
short var_9 = (short)-3186;
int zero = 0;
unsigned char var_14 = (unsigned char)27;
signed char var_15 = (signed char)45;
unsigned long long int var_16 = 17455659582449980132ULL;
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
