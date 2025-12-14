#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
signed char var_1 = (signed char)63;
unsigned char var_6 = (unsigned char)82;
unsigned int var_18 = 4237969588U;
int zero = 0;
unsigned char var_20 = (unsigned char)90;
int var_21 = 1175596538;
unsigned int var_22 = 4200321161U;
unsigned int var_23 = 1644622091U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
