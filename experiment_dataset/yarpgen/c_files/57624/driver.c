#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9089294092536022194LL;
_Bool var_2 = (_Bool)0;
long long int var_4 = -1349011905090963369LL;
unsigned short var_7 = (unsigned short)5751;
short var_12 = (short)32278;
int zero = 0;
signed char var_13 = (signed char)-88;
long long int var_14 = 9100034363584539414LL;
void init() {
}

void checksum() {
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
