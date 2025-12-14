#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 527926072;
unsigned char var_1 = (unsigned char)64;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 12444460067417018101ULL;
unsigned int var_11 = 1218928229U;
short var_14 = (short)22394;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned int var_16 = 231846687U;
short var_17 = (short)11712;
long long int var_18 = -6775755866177706400LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
