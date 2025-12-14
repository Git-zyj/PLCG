#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-58;
signed char var_6 = (signed char)49;
unsigned int var_9 = 2349518490U;
signed char var_13 = (signed char)-70;
int zero = 0;
unsigned char var_14 = (unsigned char)28;
unsigned long long int var_15 = 16196508092142675302ULL;
int var_16 = -1470606517;
unsigned char var_17 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
