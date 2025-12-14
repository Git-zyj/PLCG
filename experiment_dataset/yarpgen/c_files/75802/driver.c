#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17131062283709742097ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)14835;
unsigned int var_14 = 3658763889U;
unsigned int var_16 = 1564207446U;
int zero = 0;
unsigned long long int var_18 = 2053255099841030025ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
