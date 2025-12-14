#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4325091856682781789ULL;
unsigned int var_2 = 3041532738U;
unsigned short var_7 = (unsigned short)57616;
int var_9 = 785070642;
int zero = 0;
unsigned char var_11 = (unsigned char)84;
unsigned char var_12 = (unsigned char)249;
short var_13 = (short)5383;
unsigned long long int var_14 = 2474976139118896358ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
