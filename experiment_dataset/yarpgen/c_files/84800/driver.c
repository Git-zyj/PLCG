#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
unsigned long long int var_5 = 13524777683494147516ULL;
long long int var_7 = 2009749168456562228LL;
unsigned long long int var_11 = 3358233036934979674ULL;
int zero = 0;
signed char var_12 = (signed char)38;
short var_13 = (short)-17366;
unsigned long long int var_14 = 13187963835091886418ULL;
short var_15 = (short)7693;
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
