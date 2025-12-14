#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1947060097;
unsigned char var_4 = (unsigned char)250;
unsigned short var_5 = (unsigned short)58518;
unsigned long long int var_10 = 10338261839297643837ULL;
int zero = 0;
long long int var_20 = 2083985105266506683LL;
unsigned long long int var_21 = 17092507649550262380ULL;
_Bool var_22 = (_Bool)1;
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
