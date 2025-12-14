#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24408;
_Bool var_1 = (_Bool)1;
short var_4 = (short)21373;
unsigned char var_5 = (unsigned char)54;
unsigned int var_14 = 1589139952U;
signed char var_16 = (signed char)26;
int zero = 0;
long long int var_20 = 4703935223905625725LL;
unsigned long long int var_21 = 3832956893769084123ULL;
unsigned long long int var_22 = 7806866088025707467ULL;
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
