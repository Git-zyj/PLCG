#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_12 = (unsigned char)42;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -6253826847914760379LL;
unsigned short var_21 = (unsigned short)6433;
unsigned char var_22 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
