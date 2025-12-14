#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)26624;
short var_6 = (short)-30339;
unsigned int var_10 = 3678416927U;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-28757;
unsigned short var_17 = (unsigned short)22042;
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
