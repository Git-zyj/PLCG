#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)177;
short var_4 = (short)12691;
short var_6 = (short)-9127;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3580334300U;
unsigned char var_11 = (unsigned char)161;
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
