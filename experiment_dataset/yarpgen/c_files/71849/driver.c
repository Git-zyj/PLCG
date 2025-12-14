#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5418427498688825188LL;
signed char var_3 = (signed char)-56;
short var_7 = (short)-6215;
signed char var_10 = (signed char)-94;
short var_12 = (short)-16104;
unsigned short var_13 = (unsigned short)19223;
unsigned long long int var_15 = 15567939199093100681ULL;
long long int var_16 = 4439246248132802462LL;
int zero = 0;
signed char var_18 = (signed char)-13;
unsigned short var_19 = (unsigned short)12799;
void init() {
}

void checksum() {
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
