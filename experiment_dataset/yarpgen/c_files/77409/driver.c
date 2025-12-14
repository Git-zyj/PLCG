#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16680167357464897583ULL;
unsigned short var_2 = (unsigned short)5903;
unsigned long long int var_3 = 6358998331972072921ULL;
short var_8 = (short)-4533;
unsigned long long int var_12 = 2013176578446082575ULL;
long long int var_16 = -8508691830962064154LL;
int zero = 0;
short var_20 = (short)-31648;
unsigned int var_21 = 3321097120U;
void init() {
}

void checksum() {
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
