#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 7132077151126778487LL;
unsigned short var_9 = (unsigned short)19773;
signed char var_12 = (signed char)-23;
int zero = 0;
short var_17 = (short)24719;
unsigned int var_18 = 4097972559U;
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
