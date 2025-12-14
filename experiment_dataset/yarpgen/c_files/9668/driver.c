#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10392;
unsigned short var_9 = (unsigned short)7351;
short var_11 = (short)-30410;
short var_16 = (short)-13296;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 191760186172589182ULL;
unsigned short var_21 = (unsigned short)15581;
signed char var_22 = (signed char)119;
short var_23 = (short)24053;
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
