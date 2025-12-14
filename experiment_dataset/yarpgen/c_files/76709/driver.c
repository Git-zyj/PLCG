#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17131087271486112991ULL;
int var_2 = -1597488306;
unsigned short var_3 = (unsigned short)29823;
long long int var_4 = -9205571292603919698LL;
int var_6 = 1625970432;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)62792;
short var_10 = (short)-11241;
unsigned short var_11 = (unsigned short)50655;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_16 = -1547279252;
int var_17 = -1426132047;
unsigned short var_18 = (unsigned short)24764;
unsigned short var_19 = (unsigned short)39750;
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
