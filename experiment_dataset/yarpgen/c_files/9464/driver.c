#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17864322437052860469ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1365432954U;
signed char var_9 = (signed char)-106;
short var_11 = (short)20212;
unsigned char var_12 = (unsigned char)34;
int zero = 0;
short var_14 = (short)11312;
short var_15 = (short)31741;
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
