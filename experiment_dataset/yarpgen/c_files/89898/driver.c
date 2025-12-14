#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1369026752U;
unsigned short var_4 = (unsigned short)43752;
unsigned short var_6 = (unsigned short)22600;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)118;
unsigned int var_12 = 3262206791U;
int zero = 0;
int var_13 = 2073467122;
short var_14 = (short)11721;
short var_15 = (short)3111;
unsigned long long int var_16 = 5716500106232806445ULL;
unsigned long long int var_17 = 15354609337694547296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
