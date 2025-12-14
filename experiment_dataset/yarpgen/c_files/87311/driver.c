#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 6929306269037615319ULL;
long long int var_9 = -5654605003814556473LL;
unsigned short var_10 = (unsigned short)28558;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 919942353U;
short var_15 = (short)15788;
void init() {
}

void checksum() {
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
