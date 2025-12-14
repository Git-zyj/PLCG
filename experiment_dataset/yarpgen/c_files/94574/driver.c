#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -457700348;
int var_5 = -957239697;
_Bool var_9 = (_Bool)1;
unsigned short var_14 = (unsigned short)25426;
int zero = 0;
unsigned short var_15 = (unsigned short)23476;
signed char var_16 = (signed char)-31;
unsigned long long int var_17 = 8042725901958321953ULL;
short var_18 = (short)2227;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
