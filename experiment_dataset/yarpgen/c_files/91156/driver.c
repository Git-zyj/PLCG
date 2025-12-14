#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)222;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-1683;
unsigned long long int var_7 = 5765463992763316980ULL;
unsigned int var_10 = 2774646376U;
int zero = 0;
unsigned int var_12 = 2096933614U;
unsigned long long int var_13 = 15174785283376070468ULL;
unsigned char var_14 = (unsigned char)198;
void init() {
}

void checksum() {
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
