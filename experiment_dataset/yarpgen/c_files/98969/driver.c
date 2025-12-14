#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22820;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-7690;
unsigned long long int var_6 = 8848454194515231444ULL;
long long int var_7 = -6646017803447130943LL;
int zero = 0;
unsigned long long int var_12 = 9388190194655206583ULL;
unsigned char var_13 = (unsigned char)193;
unsigned long long int var_14 = 417869268536159007ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
