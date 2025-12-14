#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 840840001;
unsigned short var_7 = (unsigned short)64387;
unsigned short var_8 = (unsigned short)5366;
signed char var_14 = (signed char)54;
int zero = 0;
unsigned long long int var_19 = 13598630902541488589ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9168815045326864434ULL;
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
