#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47521;
int var_1 = -1076128770;
unsigned char var_2 = (unsigned char)227;
unsigned short var_6 = (unsigned short)48209;
long long int var_9 = -3390451132246683561LL;
int zero = 0;
unsigned short var_11 = (unsigned short)6052;
unsigned short var_12 = (unsigned short)29013;
short var_13 = (short)1906;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
