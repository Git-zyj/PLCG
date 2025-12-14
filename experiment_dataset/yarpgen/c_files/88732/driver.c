#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5405957115834494370ULL;
unsigned long long int var_2 = 3246012003885162388ULL;
unsigned long long int var_3 = 12282524458916371159ULL;
unsigned short var_4 = (unsigned short)12886;
int zero = 0;
unsigned long long int var_11 = 16583910693892159692ULL;
long long int var_12 = 6934104081051889568LL;
long long int var_13 = -2893960130197152806LL;
unsigned char var_14 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
