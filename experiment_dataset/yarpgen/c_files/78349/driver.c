#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4652;
int var_2 = -1131257605;
signed char var_8 = (signed char)-63;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)113;
unsigned long long int var_15 = 15450969613092046298ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)228;
long long int var_17 = 8695478838869958785LL;
unsigned long long int var_18 = 7304471471939833535ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
