#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33813;
long long int var_1 = -69367295903533250LL;
int var_2 = 1352786836;
signed char var_4 = (signed char)-1;
int var_5 = 428616534;
_Bool var_6 = (_Bool)1;
long long int var_9 = 4566584043637377836LL;
int zero = 0;
unsigned int var_10 = 3989996797U;
unsigned long long int var_11 = 2544917752630727675ULL;
unsigned int var_12 = 251527567U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
