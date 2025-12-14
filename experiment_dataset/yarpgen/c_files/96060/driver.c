#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-115;
unsigned long long int var_3 = 17401638983082405548ULL;
long long int var_5 = -5069469549596580247LL;
unsigned int var_7 = 791013651U;
unsigned long long int var_9 = 10481639181931806616ULL;
int var_15 = 1225212109;
int zero = 0;
unsigned int var_18 = 3452374688U;
signed char var_19 = (signed char)53;
int var_20 = 123693383;
signed char var_21 = (signed char)-53;
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
