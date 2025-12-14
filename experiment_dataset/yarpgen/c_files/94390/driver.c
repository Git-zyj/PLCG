#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49661;
unsigned short var_5 = (unsigned short)62085;
unsigned short var_6 = (unsigned short)22116;
unsigned short var_7 = (unsigned short)25345;
unsigned short var_12 = (unsigned short)21238;
int zero = 0;
unsigned short var_13 = (unsigned short)13279;
unsigned short var_14 = (unsigned short)44349;
unsigned short var_15 = (unsigned short)34550;
unsigned short var_16 = (unsigned short)24801;
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
