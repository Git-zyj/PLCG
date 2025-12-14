#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4453;
_Bool var_9 = (_Bool)0;
int var_10 = 670967220;
unsigned int var_16 = 3257816852U;
int zero = 0;
unsigned int var_20 = 276757091U;
unsigned short var_21 = (unsigned short)43924;
short var_22 = (short)-5588;
signed char var_23 = (signed char)76;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
