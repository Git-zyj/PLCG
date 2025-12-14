#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_7 = -797584519;
unsigned char var_9 = (unsigned char)130;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 4992057312578877062LL;
unsigned short var_13 = (unsigned short)355;
short var_14 = (short)-30833;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
