#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)10609;
unsigned short var_5 = (unsigned short)23131;
unsigned long long int var_6 = 12394321786739523113ULL;
unsigned short var_8 = (unsigned short)42825;
long long int var_12 = -8296436091606826173LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)53794;
long long int var_15 = 99021907079591933LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
