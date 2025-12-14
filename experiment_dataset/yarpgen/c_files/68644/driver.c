#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1017041517;
signed char var_4 = (signed char)-81;
short var_5 = (short)11256;
long long int var_6 = -5371604779291093250LL;
unsigned int var_7 = 3168662224U;
short var_8 = (short)-27890;
unsigned long long int var_9 = 239852070683311049ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)27519;
short var_12 = (short)-11775;
void init() {
}

void checksum() {
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
