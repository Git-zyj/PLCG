#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -1992657906;
long long int var_4 = 6972783084060363987LL;
signed char var_5 = (signed char)-21;
long long int var_6 = 423634846521585898LL;
short var_9 = (short)13113;
signed char var_11 = (signed char)-108;
unsigned long long int var_13 = 3123952119003584865ULL;
int zero = 0;
long long int var_15 = 7611871421536600365LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)114;
unsigned char var_18 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
