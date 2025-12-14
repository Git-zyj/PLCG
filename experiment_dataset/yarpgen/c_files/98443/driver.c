#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7989148324115542422LL;
signed char var_1 = (signed char)-108;
unsigned short var_2 = (unsigned short)62165;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-15075;
unsigned long long int var_8 = 9773213221922944084ULL;
int zero = 0;
unsigned long long int var_12 = 8602129381221820220ULL;
short var_13 = (short)-31793;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
