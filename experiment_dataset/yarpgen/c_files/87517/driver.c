#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)50;
unsigned char var_4 = (unsigned char)69;
signed char var_5 = (signed char)-83;
int zero = 0;
short var_12 = (short)31375;
unsigned int var_13 = 641221233U;
unsigned short var_14 = (unsigned short)37244;
short var_15 = (short)23092;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
