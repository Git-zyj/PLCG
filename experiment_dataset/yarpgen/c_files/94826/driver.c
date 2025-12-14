#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15298076535968337702ULL;
int var_11 = 332626231;
unsigned char var_12 = (unsigned char)13;
unsigned int var_13 = 2918700821U;
unsigned char var_17 = (unsigned char)189;
signed char var_18 = (signed char)(-127 - 1);
int zero = 0;
unsigned long long int var_19 = 15661003703708962659ULL;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-7745;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
