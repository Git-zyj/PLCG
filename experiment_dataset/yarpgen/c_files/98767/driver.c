#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)176;
short var_8 = (short)22540;
unsigned long long int var_10 = 10120804126149671059ULL;
short var_14 = (short)13630;
unsigned short var_16 = (unsigned short)59404;
int zero = 0;
long long int var_17 = 8911190230093168449LL;
unsigned short var_18 = (unsigned short)25549;
void init() {
}

void checksum() {
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
