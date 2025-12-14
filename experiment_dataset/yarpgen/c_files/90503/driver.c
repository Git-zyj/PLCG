#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -671092761;
unsigned int var_1 = 629471741U;
signed char var_10 = (signed char)-51;
signed char var_12 = (signed char)87;
unsigned char var_13 = (unsigned char)197;
int zero = 0;
int var_19 = 864671604;
signed char var_20 = (signed char)18;
void init() {
}

void checksum() {
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
