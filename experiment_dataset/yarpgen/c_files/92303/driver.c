#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)10;
long long int var_10 = -4720174356463877553LL;
short var_11 = (short)-13207;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-109;
unsigned int var_21 = 1160715368U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
