#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20007;
unsigned short var_2 = (unsigned short)40553;
unsigned char var_3 = (unsigned char)79;
unsigned short var_6 = (unsigned short)18386;
int zero = 0;
int var_11 = 1325027851;
signed char var_12 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
