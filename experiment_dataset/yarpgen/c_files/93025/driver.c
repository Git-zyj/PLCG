#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)93;
unsigned char var_3 = (unsigned char)67;
short var_5 = (short)3412;
unsigned long long int var_7 = 8526865810134660549ULL;
int var_8 = 1258665517;
int zero = 0;
unsigned short var_10 = (unsigned short)36852;
_Bool var_11 = (_Bool)0;
int var_12 = -1628054847;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
