#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32228;
unsigned short var_2 = (unsigned short)32785;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)38616;
_Bool var_9 = (_Bool)1;
long long int var_11 = 1776821734517886472LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)40267;
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
