#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
short var_3 = (short)-14476;
unsigned short var_5 = (unsigned short)44417;
int var_8 = -23051778;
unsigned short var_9 = (unsigned short)37896;
unsigned int var_10 = 4067598582U;
short var_13 = (short)24728;
int zero = 0;
signed char var_14 = (signed char)7;
unsigned short var_15 = (unsigned short)56724;
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
