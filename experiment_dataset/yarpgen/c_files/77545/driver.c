#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4124;
unsigned long long int var_4 = 8356788930197249671ULL;
long long int var_6 = -5248543217970023101LL;
long long int var_16 = 8101172857940940431LL;
int zero = 0;
unsigned int var_18 = 2795851111U;
unsigned char var_19 = (unsigned char)14;
signed char var_20 = (signed char)65;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
