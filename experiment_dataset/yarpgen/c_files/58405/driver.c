#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3345375158U;
short var_3 = (short)-25903;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)60481;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 1500503543;
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
