#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-111;
short var_9 = (short)-29319;
unsigned char var_15 = (unsigned char)40;
unsigned char var_16 = (unsigned char)188;
unsigned long long int var_17 = 2666100592219386829ULL;
int zero = 0;
signed char var_20 = (signed char)-70;
unsigned long long int var_21 = 17571730846588243463ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
