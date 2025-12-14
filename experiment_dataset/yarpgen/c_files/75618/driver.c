#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3838377768569486745ULL;
short var_4 = (short)-14284;
unsigned long long int var_5 = 3097400046354466701ULL;
signed char var_9 = (signed char)76;
unsigned int var_10 = 146045788U;
unsigned int var_12 = 4287805157U;
int zero = 0;
long long int var_13 = 7250955997239749327LL;
short var_14 = (short)-28290;
short var_15 = (short)26272;
unsigned char var_16 = (unsigned char)161;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
