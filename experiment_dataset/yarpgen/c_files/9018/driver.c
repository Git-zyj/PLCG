#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)55467;
unsigned long long int var_8 = 6006688195029269804ULL;
unsigned long long int var_9 = 13090454756696566417ULL;
short var_17 = (short)-30205;
int zero = 0;
unsigned long long int var_18 = 1462519174533282943ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
