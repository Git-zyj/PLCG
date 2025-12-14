#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-432;
short var_2 = (short)29875;
int var_4 = -133269725;
unsigned int var_6 = 2019938796U;
int var_8 = 69659600;
int var_9 = 1363679341;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-62;
short var_14 = (short)9362;
int var_15 = 1711725516;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 9713594003129985406ULL;
_Bool var_20 = (_Bool)1;
int var_21 = -1478812489;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
