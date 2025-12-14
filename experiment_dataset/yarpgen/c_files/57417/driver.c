#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8416;
unsigned int var_3 = 3123143265U;
int var_7 = 1336867417;
int zero = 0;
signed char var_16 = (signed char)-45;
short var_17 = (short)9786;
unsigned char var_18 = (unsigned char)87;
unsigned short var_19 = (unsigned short)7002;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
