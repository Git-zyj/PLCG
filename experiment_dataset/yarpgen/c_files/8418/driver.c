#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7794342397718698079LL;
long long int var_2 = 1689641344198214428LL;
long long int var_6 = -4403450414490246663LL;
short var_9 = (short)-22575;
int zero = 0;
long long int var_12 = 2265133979869239892LL;
int var_13 = -220966762;
unsigned short var_14 = (unsigned short)48163;
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
