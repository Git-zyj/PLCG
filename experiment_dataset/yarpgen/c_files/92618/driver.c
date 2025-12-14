#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15105;
short var_2 = (short)-31118;
long long int var_5 = -8781620664232571241LL;
unsigned short var_8 = (unsigned short)47065;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 9911793435299772419ULL;
_Bool var_15 = (_Bool)0;
int var_16 = -647829821;
unsigned short var_17 = (unsigned short)43720;
int zero = 0;
long long int var_20 = 2809787387776167168LL;
signed char var_21 = (signed char)-53;
void init() {
}

void checksum() {
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
