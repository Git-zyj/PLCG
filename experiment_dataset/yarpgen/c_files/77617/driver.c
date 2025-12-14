#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 9698801468423760719ULL;
unsigned long long int var_5 = 8976414777149666672ULL;
short var_8 = (short)23164;
int zero = 0;
short var_10 = (short)-18471;
unsigned long long int var_11 = 10194651011496110371ULL;
short var_12 = (short)-11499;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
