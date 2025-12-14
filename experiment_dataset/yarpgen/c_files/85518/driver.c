#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3258196439U;
unsigned long long int var_3 = 12795214633011335768ULL;
unsigned long long int var_5 = 6810918742368257055ULL;
unsigned short var_7 = (unsigned short)47506;
int zero = 0;
unsigned int var_10 = 1023441838U;
int var_11 = -61552068;
short var_12 = (short)-31979;
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
