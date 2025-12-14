#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)6302;
unsigned short var_14 = (unsigned short)5890;
int zero = 0;
unsigned int var_15 = 2731129433U;
unsigned short var_16 = (unsigned short)43241;
unsigned long long int var_17 = 4397430239650744656ULL;
unsigned short var_18 = (unsigned short)63369;
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
