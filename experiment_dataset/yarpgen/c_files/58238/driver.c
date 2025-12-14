#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6009527616423639315LL;
short var_2 = (short)32670;
short var_7 = (short)6261;
short var_8 = (short)-25803;
long long int var_13 = -7303013007332344360LL;
int zero = 0;
short var_15 = (short)17704;
short var_16 = (short)-11115;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
