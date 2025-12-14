#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -875198318;
unsigned char var_4 = (unsigned char)9;
unsigned short var_5 = (unsigned short)45357;
short var_14 = (short)11116;
int zero = 0;
unsigned short var_19 = (unsigned short)63249;
short var_20 = (short)-29564;
void init() {
}

void checksum() {
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
