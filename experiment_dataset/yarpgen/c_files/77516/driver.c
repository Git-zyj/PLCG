#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32151;
unsigned char var_3 = (unsigned char)184;
signed char var_5 = (signed char)82;
long long int var_8 = -5088971260886385196LL;
long long int var_9 = 412400537453748480LL;
unsigned int var_12 = 1835633501U;
int zero = 0;
signed char var_13 = (signed char)57;
signed char var_14 = (signed char)-8;
long long int var_15 = -1631791053073368847LL;
void init() {
}

void checksum() {
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
