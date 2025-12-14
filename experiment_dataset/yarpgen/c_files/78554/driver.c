#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3534807422U;
_Bool var_6 = (_Bool)1;
int var_9 = -1746483097;
unsigned char var_10 = (unsigned char)135;
unsigned long long int var_11 = 11924533871145071998ULL;
int zero = 0;
unsigned long long int var_16 = 3869486943439186025ULL;
unsigned char var_17 = (unsigned char)247;
signed char var_18 = (signed char)-38;
unsigned int var_19 = 4237278160U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
