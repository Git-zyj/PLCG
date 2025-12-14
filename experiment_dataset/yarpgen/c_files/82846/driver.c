#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2755240157087642823LL;
unsigned char var_6 = (unsigned char)237;
long long int var_9 = 2434803675729614312LL;
unsigned char var_11 = (unsigned char)36;
int zero = 0;
unsigned char var_12 = (unsigned char)11;
unsigned int var_13 = 344325827U;
long long int var_14 = -484819274630270145LL;
unsigned char var_15 = (unsigned char)52;
unsigned int var_16 = 1675335421U;
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
