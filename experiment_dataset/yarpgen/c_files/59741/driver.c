#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)18245;
unsigned char var_4 = (unsigned char)75;
_Bool var_5 = (_Bool)1;
short var_10 = (short)-16046;
unsigned long long int var_14 = 3233860449783823143ULL;
long long int var_16 = -1994644693198381078LL;
int zero = 0;
unsigned int var_19 = 817624230U;
unsigned short var_20 = (unsigned short)24693;
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
