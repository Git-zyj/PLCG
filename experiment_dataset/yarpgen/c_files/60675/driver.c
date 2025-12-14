#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8791352210679121362LL;
_Bool var_6 = (_Bool)0;
unsigned short var_16 = (unsigned short)15306;
int zero = 0;
short var_19 = (short)25382;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)203;
short var_22 = (short)14175;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
