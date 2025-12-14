#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)13478;
unsigned int var_8 = 2581210949U;
int zero = 0;
unsigned short var_15 = (unsigned short)48281;
unsigned char var_16 = (unsigned char)86;
unsigned short var_17 = (unsigned short)63362;
short var_18 = (short)-1367;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
