#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4495353776559566756ULL;
int var_14 = 225435877;
int zero = 0;
int var_20 = -550750752;
unsigned char var_21 = (unsigned char)94;
long long int var_22 = 2895823292159689786LL;
unsigned char var_23 = (unsigned char)21;
int var_24 = -1514036904;
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
