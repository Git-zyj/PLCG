#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-16;
long long int var_5 = -5928564111197521138LL;
unsigned char var_10 = (unsigned char)63;
int zero = 0;
unsigned int var_13 = 1746532185U;
long long int var_14 = -1344294519972000428LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
