#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -228178562;
unsigned int var_1 = 4251624938U;
unsigned short var_3 = (unsigned short)61574;
int var_5 = 1178969319;
int var_7 = -1344106940;
unsigned long long int var_9 = 15436361131548616253ULL;
int zero = 0;
unsigned long long int var_13 = 8050150376337473956ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3596412854U;
long long int var_16 = 2500397854191981975LL;
void init() {
}

void checksum() {
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
