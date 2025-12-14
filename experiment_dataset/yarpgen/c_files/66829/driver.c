#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)1;
unsigned char var_14 = (unsigned char)5;
unsigned int var_18 = 42245524U;
int zero = 0;
unsigned long long int var_20 = 15425689256565582512ULL;
long long int var_21 = 1489188791975924146LL;
void init() {
}

void checksum() {
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
