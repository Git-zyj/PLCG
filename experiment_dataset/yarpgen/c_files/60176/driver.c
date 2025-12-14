#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 6225968422940430871LL;
int var_2 = -1187837138;
unsigned int var_3 = 845624642U;
_Bool var_4 = (_Bool)1;
long long int var_5 = 7945592959485016289LL;
signed char var_8 = (signed char)-74;
int zero = 0;
signed char var_12 = (signed char)-75;
unsigned int var_13 = 3831569851U;
unsigned char var_14 = (unsigned char)115;
long long int var_15 = 300358933340960481LL;
unsigned long long int var_16 = 4067970218810827776ULL;
unsigned short var_17 = (unsigned short)12739;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
