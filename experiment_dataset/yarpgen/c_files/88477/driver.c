#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2883071886U;
short var_3 = (short)-12802;
int var_6 = 1017517887;
unsigned int var_8 = 1724458336U;
signed char var_10 = (signed char)-20;
unsigned int var_12 = 3482845232U;
int zero = 0;
signed char var_13 = (signed char)-118;
long long int var_14 = -1469159615968280029LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
