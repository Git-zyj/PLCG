#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)124;
unsigned char var_1 = (unsigned char)93;
long long int var_5 = -4099966873182742584LL;
unsigned long long int var_7 = 9888839724906241071ULL;
unsigned int var_8 = 2823590251U;
long long int var_11 = -3738529548640714162LL;
int zero = 0;
unsigned long long int var_13 = 5415093490011121560ULL;
long long int var_14 = -3850020142725315708LL;
void init() {
}

void checksum() {
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
