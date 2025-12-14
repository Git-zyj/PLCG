#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)5644;
signed char var_8 = (signed char)64;
int zero = 0;
unsigned short var_16 = (unsigned short)32574;
long long int var_17 = -2255513514237597029LL;
unsigned long long int var_18 = 3803363464149867398ULL;
unsigned short var_19 = (unsigned short)35581;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
