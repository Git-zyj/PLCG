#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5304;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)163;
int var_11 = -1669904601;
long long int var_15 = 8839272538501699974LL;
unsigned int var_16 = 2226523672U;
int zero = 0;
short var_18 = (short)6630;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
