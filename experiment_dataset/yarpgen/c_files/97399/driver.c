#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 314716706;
unsigned int var_8 = 3664463722U;
int zero = 0;
unsigned char var_10 = (unsigned char)166;
unsigned char var_11 = (unsigned char)38;
signed char var_12 = (signed char)-118;
signed char var_13 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
