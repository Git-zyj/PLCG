#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 505012388;
long long int var_4 = -2189419060509208676LL;
short var_6 = (short)-20273;
int zero = 0;
signed char var_11 = (signed char)17;
_Bool var_12 = (_Bool)1;
int var_13 = -1306326024;
unsigned short var_14 = (unsigned short)23325;
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
