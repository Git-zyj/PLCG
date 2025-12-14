#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2645695464574395741LL;
unsigned char var_4 = (unsigned char)108;
signed char var_5 = (signed char)116;
unsigned int var_6 = 3381258412U;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)46714;
short var_11 = (short)-22252;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
