#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4914143840420483670LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)91;
unsigned char var_12 = (unsigned char)5;
long long int var_13 = 7728424884479503729LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
