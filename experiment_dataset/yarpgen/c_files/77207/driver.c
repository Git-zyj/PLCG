#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1850963847;
int var_2 = 1676515326;
int var_5 = 519630923;
unsigned long long int var_12 = 4551823141145135218ULL;
signed char var_13 = (signed char)46;
int zero = 0;
signed char var_15 = (signed char)-39;
unsigned long long int var_16 = 9535091514019967948ULL;
short var_17 = (short)-3349;
unsigned short var_18 = (unsigned short)4182;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
