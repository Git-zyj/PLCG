#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-4;
unsigned char var_8 = (unsigned char)65;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8877103467898473386LL;
unsigned long long int var_12 = 4626833424861587619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
