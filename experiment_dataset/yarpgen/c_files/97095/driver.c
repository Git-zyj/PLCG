#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1130573150430898950LL;
unsigned char var_6 = (unsigned char)113;
_Bool var_8 = (_Bool)0;
int var_14 = -1515440025;
int var_18 = -1280875267;
int zero = 0;
unsigned short var_19 = (unsigned short)29954;
int var_20 = -1643777725;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
