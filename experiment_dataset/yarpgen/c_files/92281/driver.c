#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47982;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)20908;
short var_11 = (short)-4879;
int zero = 0;
unsigned short var_15 = (unsigned short)3641;
signed char var_16 = (signed char)-97;
signed char var_17 = (signed char)-4;
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
