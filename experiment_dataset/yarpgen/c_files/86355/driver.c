#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)220;
long long int var_5 = -8914027834075573006LL;
long long int var_7 = 1281644996213943452LL;
unsigned int var_15 = 1720767351U;
int zero = 0;
long long int var_16 = 1302742645355973033LL;
long long int var_17 = 4658493257883058092LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
