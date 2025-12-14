#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)132;
unsigned short var_16 = (unsigned short)4359;
unsigned long long int var_17 = 15946331736835570518ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)241;
signed char var_19 = (signed char)89;
signed char var_20 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
