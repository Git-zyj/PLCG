#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-111;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17167459296678917066ULL;
int var_14 = -1728787604;
unsigned short var_15 = (unsigned short)24904;
long long int var_16 = -4635859827035009480LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
