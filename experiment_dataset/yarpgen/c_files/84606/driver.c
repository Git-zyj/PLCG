#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2061486955;
unsigned char var_3 = (unsigned char)247;
int var_7 = -240421695;
unsigned int var_14 = 97723579U;
int zero = 0;
signed char var_17 = (signed char)17;
signed char var_18 = (signed char)-45;
void init() {
}

void checksum() {
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
