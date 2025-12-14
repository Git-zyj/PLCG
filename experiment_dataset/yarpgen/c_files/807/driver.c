#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -209233106;
int var_7 = 2037684107;
signed char var_9 = (signed char)-7;
short var_11 = (short)-23966;
unsigned short var_12 = (unsigned short)10079;
int zero = 0;
unsigned int var_16 = 3305098776U;
int var_17 = -1126709737;
unsigned char var_18 = (unsigned char)29;
short var_19 = (short)12930;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
