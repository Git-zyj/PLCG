#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2834095245U;
_Bool var_8 = (_Bool)1;
short var_14 = (short)16190;
int zero = 0;
unsigned short var_19 = (unsigned short)17027;
unsigned short var_20 = (unsigned short)59012;
signed char var_21 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
