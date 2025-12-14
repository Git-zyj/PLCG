#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27855;
short var_4 = (short)-24996;
signed char var_10 = (signed char)110;
unsigned long long int var_12 = 10879456551835621194ULL;
int zero = 0;
unsigned long long int var_14 = 6875379385195759675ULL;
long long int var_15 = -3799777788960113115LL;
unsigned int var_16 = 4077136808U;
unsigned int var_17 = 2776019875U;
long long int var_18 = 6452629019630815748LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
