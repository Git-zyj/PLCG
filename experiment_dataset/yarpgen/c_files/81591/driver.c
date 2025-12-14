#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2101836701U;
long long int var_5 = 4239184313285261334LL;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
unsigned short var_17 = (unsigned short)24813;
signed char var_18 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
