#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31356;
int var_7 = -485768805;
unsigned char var_9 = (unsigned char)108;
unsigned char var_14 = (unsigned char)62;
int zero = 0;
long long int var_17 = 4581794223116342588LL;
short var_18 = (short)17347;
unsigned char var_19 = (unsigned char)124;
unsigned int var_20 = 383448750U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
