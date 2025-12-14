#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)6;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 14159374728769728890ULL;
unsigned long long int var_14 = 17445573351444199201ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)58410;
unsigned int var_16 = 433521819U;
unsigned long long int var_17 = 4258597568429977515ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
