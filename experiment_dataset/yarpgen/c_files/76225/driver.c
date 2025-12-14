#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
unsigned long long int var_2 = 995384787453656100ULL;
unsigned long long int var_3 = 15196737674488468889ULL;
unsigned char var_13 = (unsigned char)243;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
unsigned char var_15 = (unsigned char)87;
void init() {
}

void checksum() {
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
