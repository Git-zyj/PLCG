#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-39;
signed char var_2 = (signed char)-61;
unsigned int var_5 = 993628364U;
unsigned long long int var_8 = 3847932543052167698ULL;
unsigned short var_9 = (unsigned short)43263;
int zero = 0;
unsigned long long int var_10 = 1859885683932363678ULL;
unsigned short var_11 = (unsigned short)37618;
signed char var_12 = (signed char)-100;
unsigned short var_13 = (unsigned short)35638;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
