#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
signed char var_1 = (signed char)-97;
short var_5 = (short)-32474;
long long int var_6 = 7156611148387079404LL;
unsigned int var_8 = 2310787821U;
int zero = 0;
unsigned long long int var_18 = 7814205629096447781ULL;
unsigned long long int var_19 = 14619329251178198144ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
