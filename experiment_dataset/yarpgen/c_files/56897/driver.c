#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 551974456380168392LL;
unsigned char var_2 = (unsigned char)213;
int var_8 = -2054297499;
int zero = 0;
unsigned char var_10 = (unsigned char)127;
unsigned int var_11 = 3335435392U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
