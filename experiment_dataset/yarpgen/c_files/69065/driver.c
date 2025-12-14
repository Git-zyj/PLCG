#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12244;
unsigned short var_3 = (unsigned short)38307;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)28729;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)10244;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
