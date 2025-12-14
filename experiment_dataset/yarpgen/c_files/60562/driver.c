#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-16;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)19;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)49278;
signed char var_16 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
