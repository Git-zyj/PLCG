#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 865818865;
signed char var_3 = (signed char)109;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 217495489U;
unsigned char var_9 = (unsigned char)172;
unsigned char var_11 = (unsigned char)99;
short var_13 = (short)-16558;
int zero = 0;
int var_16 = -147122267;
unsigned int var_17 = 3697401685U;
long long int var_18 = -5376083782611919769LL;
long long int var_19 = 5700164220968829727LL;
long long int var_20 = 2412875511196849317LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
