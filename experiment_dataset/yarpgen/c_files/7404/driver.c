#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
unsigned int var_1 = 59733134U;
long long int var_2 = 4298050372093972992LL;
signed char var_5 = (signed char)14;
unsigned char var_10 = (unsigned char)14;
int zero = 0;
signed char var_13 = (signed char)91;
_Bool var_14 = (_Bool)0;
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
