#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1665257544;
signed char var_1 = (signed char)-6;
unsigned short var_2 = (unsigned short)46297;
_Bool var_3 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)104;
unsigned short var_11 = (unsigned short)43987;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
