#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2794703557U;
int var_16 = 125564995;
unsigned short var_17 = (unsigned short)9737;
int zero = 0;
int var_19 = 247353660;
unsigned short var_20 = (unsigned short)8432;
long long int var_21 = -3133842972427403374LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
