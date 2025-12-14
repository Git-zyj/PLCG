#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6241933242455701142LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)43178;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-12675;
int zero = 0;
unsigned short var_14 = (unsigned short)35722;
long long int var_15 = 7174597444408851108LL;
signed char var_16 = (signed char)28;
long long int var_17 = -4333959184386069567LL;
void init() {
}

void checksum() {
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
