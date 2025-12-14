#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2588608055853087975LL;
long long int var_4 = -6308203034641656147LL;
unsigned short var_10 = (unsigned short)26289;
int var_11 = -1528069050;
int zero = 0;
signed char var_12 = (signed char)75;
unsigned int var_13 = 2171815252U;
unsigned char var_14 = (unsigned char)16;
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
