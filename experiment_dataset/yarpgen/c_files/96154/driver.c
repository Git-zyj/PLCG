#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17426;
unsigned int var_2 = 905683471U;
short var_4 = (short)793;
unsigned short var_6 = (unsigned short)6715;
int zero = 0;
unsigned int var_10 = 1497462608U;
unsigned short var_11 = (unsigned short)35546;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
