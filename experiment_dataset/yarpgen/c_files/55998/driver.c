#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1849155969;
unsigned long long int var_2 = 4062320505620281231ULL;
int var_3 = 15077612;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)1638;
unsigned long long int var_10 = 41749304675429413ULL;
signed char var_13 = (signed char)-89;
int zero = 0;
short var_16 = (short)-7883;
signed char var_17 = (signed char)-15;
short var_18 = (short)-29998;
unsigned short var_19 = (unsigned short)28731;
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
