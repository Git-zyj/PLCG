#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
signed char var_3 = (signed char)-20;
signed char var_8 = (signed char)-126;
unsigned char var_12 = (unsigned char)29;
int zero = 0;
unsigned int var_15 = 1439638014U;
unsigned int var_16 = 3735994378U;
long long int var_17 = -7765124607344667638LL;
unsigned char var_18 = (unsigned char)97;
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
