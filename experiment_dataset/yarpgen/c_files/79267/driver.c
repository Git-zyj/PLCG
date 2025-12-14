#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
signed char var_1 = (signed char)125;
short var_3 = (short)-26972;
unsigned int var_5 = 974827944U;
long long int var_7 = 8951663002653282001LL;
short var_10 = (short)5472;
signed char var_12 = (signed char)-62;
signed char var_14 = (signed char)-108;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 307741517;
long long int var_17 = -3442797750352716563LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
