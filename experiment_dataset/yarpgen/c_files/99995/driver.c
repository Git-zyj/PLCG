#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48751;
unsigned int var_5 = 938115879U;
long long int var_8 = -691384874604526045LL;
unsigned short var_12 = (unsigned short)32911;
int zero = 0;
int var_13 = 327813989;
unsigned short var_14 = (unsigned short)60978;
long long int var_15 = 3544168008772057164LL;
unsigned char var_16 = (unsigned char)177;
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
