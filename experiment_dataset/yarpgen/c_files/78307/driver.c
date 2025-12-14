#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
int var_2 = 566518761;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-16511;
unsigned long long int var_8 = 11657868067924661450ULL;
unsigned int var_9 = 170380479U;
unsigned long long int var_11 = 6317599316071471203ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)229;
unsigned long long int var_17 = 12226437849685876758ULL;
short var_18 = (short)32345;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
