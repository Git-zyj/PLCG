#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 557058988U;
int var_6 = 924702392;
long long int var_7 = -618679213741150230LL;
signed char var_8 = (signed char)33;
long long int var_9 = 4832629390563208414LL;
unsigned short var_11 = (unsigned short)53761;
int zero = 0;
int var_12 = -537140496;
unsigned char var_13 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
