#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4002373837U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 11188745044718510106ULL;
int zero = 0;
short var_12 = (short)-28078;
short var_13 = (short)-15758;
unsigned short var_14 = (unsigned short)26227;
unsigned char var_15 = (unsigned char)83;
signed char var_16 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
