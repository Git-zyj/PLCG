#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1073637694;
unsigned char var_9 = (unsigned char)20;
unsigned short var_12 = (unsigned short)17673;
int zero = 0;
unsigned int var_16 = 1296312264U;
unsigned char var_17 = (unsigned char)40;
int var_18 = -133265781;
void init() {
}

void checksum() {
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
