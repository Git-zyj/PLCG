#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2161499915532634213ULL;
unsigned short var_12 = (unsigned short)10039;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-466;
unsigned long long int var_18 = 16550622792721618764ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
