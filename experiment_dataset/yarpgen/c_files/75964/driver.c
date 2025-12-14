#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8650243602602611198LL;
short var_2 = (short)-19417;
short var_13 = (short)23365;
long long int var_18 = -6274528469966691103LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-32707;
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
