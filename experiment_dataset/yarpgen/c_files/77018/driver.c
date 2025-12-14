#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)95;
unsigned short var_8 = (unsigned short)3459;
unsigned long long int var_9 = 15746937625917641385ULL;
unsigned short var_11 = (unsigned short)48588;
unsigned int var_13 = 3026736596U;
int zero = 0;
short var_15 = (short)-26353;
short var_16 = (short)-17238;
void init() {
}

void checksum() {
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
