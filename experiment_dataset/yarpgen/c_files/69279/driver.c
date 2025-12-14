#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -413290211;
int var_9 = -854372505;
unsigned short var_12 = (unsigned short)21371;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 14092091021741607565ULL;
unsigned char var_15 = (unsigned char)133;
int var_16 = -570606238;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
