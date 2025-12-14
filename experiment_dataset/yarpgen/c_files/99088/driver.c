#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9942149549362346451ULL;
unsigned short var_1 = (unsigned short)15307;
long long int var_12 = 1939624206877762745LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11317068094887881698ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
