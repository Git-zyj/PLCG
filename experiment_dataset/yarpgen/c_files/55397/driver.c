#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)30501;
long long int var_10 = -190010245780663463LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_20 = -972727946463469035LL;
unsigned short var_21 = (unsigned short)5617;
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
