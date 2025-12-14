#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
unsigned int var_2 = 573144962U;
unsigned short var_6 = (unsigned short)27640;
unsigned short var_9 = (unsigned short)5773;
unsigned long long int var_12 = 9835739559646953030ULL;
int zero = 0;
long long int var_16 = 2215728433710653048LL;
short var_17 = (short)-17790;
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
