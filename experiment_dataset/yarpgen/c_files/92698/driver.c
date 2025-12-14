#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
long long int var_1 = 5852850367129465552LL;
signed char var_13 = (signed char)0;
int zero = 0;
unsigned char var_15 = (unsigned char)63;
long long int var_16 = 649971630706118318LL;
unsigned short var_17 = (unsigned short)24564;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
