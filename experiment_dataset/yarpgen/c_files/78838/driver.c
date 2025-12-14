#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4015236639984225834LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)54470;
long long int var_6 = -7305463553005470871LL;
int var_7 = -354646011;
signed char var_9 = (signed char)-25;
int zero = 0;
short var_10 = (short)-1110;
long long int var_11 = -7357931190160614927LL;
short var_12 = (short)-15798;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
