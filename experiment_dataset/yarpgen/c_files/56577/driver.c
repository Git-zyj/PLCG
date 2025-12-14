#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6500275553764746543LL;
long long int var_5 = -5551407626370284323LL;
_Bool var_10 = (_Bool)0;
short var_13 = (short)13693;
unsigned char var_17 = (unsigned char)203;
unsigned char var_18 = (unsigned char)83;
int zero = 0;
unsigned char var_19 = (unsigned char)252;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
