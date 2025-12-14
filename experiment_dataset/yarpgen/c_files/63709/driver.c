#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4286015885U;
unsigned short var_3 = (unsigned short)23243;
unsigned int var_7 = 258548144U;
short var_9 = (short)12095;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = 1306980352;
unsigned int var_15 = 153078041U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
