#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)46740;
unsigned int var_11 = 573372309U;
long long int var_12 = 8453909248434899709LL;
unsigned char var_13 = (unsigned char)123;
int var_19 = 654684080;
int zero = 0;
unsigned short var_20 = (unsigned short)32168;
short var_21 = (short)13243;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
