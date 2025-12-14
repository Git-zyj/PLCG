#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_11 = (short)-3517;
short var_17 = (short)-10877;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-22624;
unsigned short var_21 = (unsigned short)22775;
signed char var_22 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
