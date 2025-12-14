#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35101;
unsigned long long int var_3 = 7981811639384372367ULL;
int var_5 = 1285206599;
unsigned char var_7 = (unsigned char)146;
short var_8 = (short)-10873;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 6505984463969256778LL;
unsigned short var_12 = (unsigned short)40174;
unsigned int var_13 = 3677534079U;
short var_14 = (short)-22489;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
