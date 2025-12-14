#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
unsigned long long int var_1 = 2320399045251438573ULL;
unsigned long long int var_4 = 1841510114389641417ULL;
int var_5 = 1963877869;
unsigned short var_6 = (unsigned short)51572;
unsigned int var_9 = 3077557334U;
unsigned long long int var_10 = 14501411424338327616ULL;
signed char var_12 = (signed char)118;
unsigned long long int var_14 = 11660784481242649280ULL;
int zero = 0;
int var_15 = 2027478379;
signed char var_16 = (signed char)-14;
void init() {
}

void checksum() {
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
