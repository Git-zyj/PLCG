#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)29;
int var_7 = -527520715;
short var_9 = (short)-28141;
int var_12 = -2000998783;
long long int var_13 = -7002411931858009961LL;
int zero = 0;
short var_14 = (short)2262;
unsigned char var_15 = (unsigned char)184;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
