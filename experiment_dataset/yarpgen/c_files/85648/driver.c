#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)846;
unsigned short var_2 = (unsigned short)19398;
unsigned int var_5 = 3912362079U;
long long int var_9 = -5298433369466190294LL;
int zero = 0;
unsigned short var_10 = (unsigned short)35896;
unsigned short var_11 = (unsigned short)53411;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
