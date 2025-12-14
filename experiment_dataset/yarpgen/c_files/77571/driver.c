#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1449013410872509265ULL;
unsigned int var_5 = 404662679U;
unsigned short var_7 = (unsigned short)13010;
unsigned long long int var_10 = 1870945221232821909ULL;
int var_11 = -828998591;
int zero = 0;
unsigned int var_12 = 3138683873U;
long long int var_13 = -4756191990817195152LL;
void init() {
}

void checksum() {
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
