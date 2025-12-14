#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63853;
int var_12 = -1249977887;
int zero = 0;
unsigned long long int var_13 = 11261888525633354447ULL;
unsigned short var_14 = (unsigned short)40663;
signed char var_15 = (signed char)-17;
unsigned char var_16 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
