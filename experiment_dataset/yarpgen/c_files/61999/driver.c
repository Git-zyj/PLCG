#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3855273485375875324LL;
unsigned short var_4 = (unsigned short)41382;
short var_5 = (short)-20408;
unsigned char var_6 = (unsigned char)97;
unsigned int var_8 = 4140626355U;
int zero = 0;
short var_13 = (short)24827;
short var_14 = (short)14048;
unsigned int var_15 = 2989355271U;
void init() {
}

void checksum() {
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
