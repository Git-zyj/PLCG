#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4474566364528876396ULL;
unsigned int var_10 = 343859795U;
unsigned char var_15 = (unsigned char)75;
unsigned long long int var_16 = 16141639622053614720ULL;
int zero = 0;
unsigned int var_17 = 580325643U;
unsigned long long int var_18 = 13579991361317007803ULL;
int var_19 = 1840120736;
int var_20 = 1088766221;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
