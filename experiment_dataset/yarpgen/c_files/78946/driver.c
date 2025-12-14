#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1642059176U;
short var_6 = (short)-233;
unsigned short var_7 = (unsigned short)51504;
int zero = 0;
unsigned long long int var_11 = 11536738552738420672ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)37;
_Bool var_14 = (_Bool)1;
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
