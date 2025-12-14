#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27255;
unsigned char var_2 = (unsigned char)96;
signed char var_4 = (signed char)48;
unsigned int var_9 = 1227487218U;
long long int var_10 = -8715673269363046307LL;
int zero = 0;
int var_11 = 1871903219;
unsigned int var_12 = 2079050311U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
