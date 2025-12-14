#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22762;
short var_5 = (short)-24703;
long long int var_9 = -1541455899756795133LL;
int zero = 0;
signed char var_12 = (signed char)-123;
unsigned long long int var_13 = 606144425112258662ULL;
unsigned short var_14 = (unsigned short)33124;
unsigned short var_15 = (unsigned short)48665;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
