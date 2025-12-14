#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)5996;
unsigned int var_7 = 1500820740U;
unsigned short var_8 = (unsigned short)17055;
unsigned short var_9 = (unsigned short)49691;
int zero = 0;
unsigned short var_11 = (unsigned short)63033;
short var_12 = (short)12581;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
