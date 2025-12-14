#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)40;
unsigned int var_3 = 4200226918U;
long long int var_6 = 864846512596024225LL;
unsigned short var_13 = (unsigned short)6074;
unsigned int var_15 = 1564309820U;
int zero = 0;
long long int var_17 = -7961820049263459464LL;
long long int var_18 = -5628889489889228881LL;
unsigned long long int var_19 = 11647661690194123401ULL;
unsigned short var_20 = (unsigned short)50677;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
