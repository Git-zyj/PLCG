#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9251;
int var_4 = 1597776527;
int var_5 = 1268808654;
int var_8 = -1273961733;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-55;
short var_19 = (short)-15346;
unsigned int var_20 = 511784282U;
unsigned long long int var_21 = 3070338375975726730ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
