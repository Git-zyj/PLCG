#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-29540;
unsigned int var_12 = 114928907U;
short var_14 = (short)1579;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7689843770296557512LL;
unsigned char var_20 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
