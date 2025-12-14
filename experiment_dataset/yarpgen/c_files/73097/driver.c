#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1985800371383120831LL;
short var_5 = (short)-9563;
short var_7 = (short)-4952;
int var_10 = 549163237;
unsigned long long int var_12 = 8155386404049392886ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)3351;
_Bool var_14 = (_Bool)0;
short var_15 = (short)16091;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
