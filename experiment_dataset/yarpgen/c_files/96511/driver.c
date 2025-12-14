#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4561225822505324367ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_12 = 3040041896U;
int var_15 = 1824356551;
int zero = 0;
unsigned char var_16 = (unsigned char)200;
unsigned short var_17 = (unsigned short)61049;
int var_18 = 1693116579;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
