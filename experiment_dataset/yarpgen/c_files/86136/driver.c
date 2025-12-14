#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1340;
unsigned char var_8 = (unsigned char)59;
unsigned int var_9 = 3680295598U;
unsigned char var_17 = (unsigned char)73;
unsigned int var_18 = 568045127U;
int zero = 0;
unsigned int var_19 = 1878110922U;
unsigned char var_20 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
