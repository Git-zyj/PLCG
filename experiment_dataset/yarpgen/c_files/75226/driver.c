#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8838912630626940872LL;
unsigned long long int var_4 = 1198256398215517815ULL;
long long int var_7 = 5135258024656666923LL;
long long int var_12 = -8799511947151315208LL;
int zero = 0;
unsigned int var_13 = 2268020682U;
unsigned char var_14 = (unsigned char)174;
unsigned short var_15 = (unsigned short)10901;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
