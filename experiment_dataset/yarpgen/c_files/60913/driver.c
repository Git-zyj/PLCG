#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -970476749;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)116;
unsigned long long int var_9 = 13881087084536255550ULL;
unsigned char var_11 = (unsigned char)52;
unsigned char var_12 = (unsigned char)16;
int zero = 0;
unsigned long long int var_13 = 13161547344736798086ULL;
short var_14 = (short)-6626;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
