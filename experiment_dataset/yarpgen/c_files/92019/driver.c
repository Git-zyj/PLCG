#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -7621457017552238595LL;
long long int var_11 = 513501962818203690LL;
int zero = 0;
unsigned int var_20 = 1136189860U;
short var_21 = (short)-32450;
long long int var_22 = -5667721287203179988LL;
short var_23 = (short)6043;
unsigned long long int var_24 = 11715032568532999029ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
