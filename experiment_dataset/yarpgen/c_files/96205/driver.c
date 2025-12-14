#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
long long int var_1 = 2154802271976803203LL;
unsigned short var_2 = (unsigned short)62041;
unsigned int var_5 = 1272165411U;
unsigned long long int var_6 = 13620346179651797796ULL;
signed char var_9 = (signed char)107;
int zero = 0;
unsigned char var_10 = (unsigned char)82;
unsigned int var_11 = 619149350U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
