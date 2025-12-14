#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3912321376406103853LL;
short var_4 = (short)511;
long long int var_8 = 1618661220790794890LL;
unsigned char var_10 = (unsigned char)128;
unsigned long long int var_11 = 1480832660970837172ULL;
short var_13 = (short)30738;
int zero = 0;
signed char var_14 = (signed char)58;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)7388;
unsigned int var_17 = 1041673782U;
short var_18 = (short)-17377;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
