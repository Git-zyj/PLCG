#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
long long int var_5 = 5395020575329095863LL;
unsigned char var_10 = (unsigned char)52;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7429699898816985101LL;
void init() {
}

void checksum() {
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
