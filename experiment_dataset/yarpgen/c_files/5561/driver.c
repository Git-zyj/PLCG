#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 486643967;
unsigned char var_1 = (unsigned char)92;
short var_6 = (short)3946;
unsigned int var_9 = 1477741121U;
int zero = 0;
signed char var_10 = (signed char)-91;
long long int var_11 = -7634459758981176631LL;
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
