#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15149383607742705328ULL;
unsigned long long int var_5 = 7136310884724562996ULL;
signed char var_6 = (signed char)1;
int var_7 = -1937903063;
long long int var_9 = -5685438202853996911LL;
unsigned short var_10 = (unsigned short)26939;
long long int var_11 = 3107882593491538152LL;
int var_13 = 1601002516;
int zero = 0;
unsigned long long int var_16 = 7033619588779708632ULL;
unsigned int var_17 = 1216737168U;
void init() {
}

void checksum() {
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
