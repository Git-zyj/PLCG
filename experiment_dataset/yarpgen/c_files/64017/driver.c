#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11527;
_Bool var_3 = (_Bool)1;
unsigned long long int var_7 = 15741563632882837125ULL;
unsigned short var_9 = (unsigned short)49476;
short var_12 = (short)-24318;
int zero = 0;
unsigned long long int var_13 = 5625299464928036902ULL;
long long int var_14 = -3702722700030728954LL;
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
