#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)197;
signed char var_6 = (signed char)124;
signed char var_10 = (signed char)63;
int zero = 0;
unsigned char var_12 = (unsigned char)162;
signed char var_13 = (signed char)-69;
signed char var_14 = (signed char)14;
unsigned char var_15 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
