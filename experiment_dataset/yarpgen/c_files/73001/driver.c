#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1915614721U;
unsigned int var_3 = 409516892U;
unsigned char var_6 = (unsigned char)152;
int var_14 = 1064561863;
int zero = 0;
unsigned long long int var_17 = 5765908418466298327ULL;
unsigned int var_18 = 3681245434U;
unsigned char var_19 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
