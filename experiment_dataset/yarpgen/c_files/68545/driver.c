#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)11490;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 13668205596711210741ULL;
int var_9 = -649258868;
int var_13 = -282726085;
int zero = 0;
short var_15 = (short)495;
int var_16 = 1398088874;
int var_17 = -2002254045;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
