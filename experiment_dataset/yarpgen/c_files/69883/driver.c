#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 532520639;
unsigned char var_11 = (unsigned char)87;
int zero = 0;
unsigned long long int var_20 = 2929692888517433334ULL;
unsigned short var_21 = (unsigned short)50488;
unsigned long long int var_22 = 14875647698193545997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
