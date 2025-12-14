#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
long long int var_9 = 5781805080220584691LL;
int var_13 = -764982723;
short var_14 = (short)-11687;
int zero = 0;
unsigned long long int var_15 = 4314209866268757963ULL;
unsigned char var_16 = (unsigned char)233;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
