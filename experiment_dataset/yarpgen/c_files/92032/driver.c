#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4360260281646397817ULL;
long long int var_5 = -3555347464961607226LL;
short var_12 = (short)7161;
int zero = 0;
unsigned short var_17 = (unsigned short)15096;
long long int var_18 = -5251521384515397889LL;
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
