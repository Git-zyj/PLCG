#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11314733327660743838ULL;
unsigned long long int var_1 = 16306518893337411397ULL;
signed char var_3 = (signed char)-7;
unsigned int var_4 = 3164554299U;
unsigned char var_5 = (unsigned char)183;
unsigned short var_8 = (unsigned short)18522;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 17877144721513155107ULL;
int zero = 0;
int var_13 = 486721975;
unsigned short var_14 = (unsigned short)53825;
signed char var_15 = (signed char)33;
short var_16 = (short)1887;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
