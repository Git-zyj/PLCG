#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
long long int var_1 = 91127929763315505LL;
int var_2 = -69151713;
int var_4 = -1420772043;
long long int var_8 = 5076158650405866106LL;
int var_10 = 65905179;
unsigned long long int var_11 = 14658330924085475939ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2704410105U;
int var_14 = 373210400;
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
