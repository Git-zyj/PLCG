#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
signed char var_8 = (signed char)-17;
unsigned long long int var_11 = 5292496086314293421ULL;
int zero = 0;
unsigned long long int var_14 = 12794149610018140635ULL;
unsigned char var_15 = (unsigned char)46;
void init() {
}

void checksum() {
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
