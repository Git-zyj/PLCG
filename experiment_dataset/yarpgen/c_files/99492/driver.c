#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1011391086073706161ULL;
int var_4 = 1170622562;
_Bool var_5 = (_Bool)0;
int var_7 = -1088211451;
unsigned short var_17 = (unsigned short)21440;
int zero = 0;
unsigned short var_20 = (unsigned short)38442;
_Bool var_21 = (_Bool)1;
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
