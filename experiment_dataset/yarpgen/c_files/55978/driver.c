#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
signed char var_1 = (signed char)99;
long long int var_2 = 312808270001759984LL;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)12;
signed char var_11 = (signed char)-28;
short var_12 = (short)-6250;
signed char var_15 = (signed char)-39;
int zero = 0;
long long int var_16 = 8135532355725655078LL;
long long int var_17 = -4370248762258592182LL;
short var_18 = (short)1596;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
