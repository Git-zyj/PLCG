#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17298917395326511523ULL;
signed char var_8 = (signed char)-108;
unsigned int var_9 = 1482130220U;
int zero = 0;
unsigned long long int var_12 = 8397845230361939803ULL;
short var_13 = (short)6596;
short var_14 = (short)-18280;
unsigned long long int var_15 = 4813012024906802469ULL;
long long int var_16 = -3103953206506592275LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
