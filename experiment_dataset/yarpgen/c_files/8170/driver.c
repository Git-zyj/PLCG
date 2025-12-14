#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23689;
int var_5 = 2025184354;
short var_9 = (short)3860;
unsigned char var_10 = (unsigned char)151;
int zero = 0;
int var_12 = 1995260310;
signed char var_13 = (signed char)-82;
signed char var_14 = (signed char)-56;
long long int var_15 = 8059700065395476845LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 8774603778662472595LL;
short var_18 = (short)-14404;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
