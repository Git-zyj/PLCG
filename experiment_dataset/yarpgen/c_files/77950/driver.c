#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)23091;
unsigned char var_8 = (unsigned char)192;
unsigned char var_9 = (unsigned char)215;
long long int var_10 = -3505061440467755908LL;
int zero = 0;
unsigned long long int var_12 = 4829034885289468806ULL;
unsigned short var_13 = (unsigned short)25949;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
