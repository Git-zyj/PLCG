#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
long long int var_3 = -8785932222211954092LL;
signed char var_5 = (signed char)39;
unsigned long long int var_11 = 2112091085300768539ULL;
unsigned long long int var_16 = 2437720905719187122ULL;
int zero = 0;
int var_17 = 50663729;
unsigned int var_18 = 40898404U;
unsigned long long int var_19 = 7730601675420002112ULL;
unsigned short var_20 = (unsigned short)13822;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
