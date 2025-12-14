#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30916;
unsigned short var_4 = (unsigned short)15615;
unsigned short var_5 = (unsigned short)47612;
unsigned char var_8 = (unsigned char)255;
long long int var_10 = 2394938468277061197LL;
long long int var_11 = -3316209351596308038LL;
unsigned short var_13 = (unsigned short)1768;
int zero = 0;
long long int var_14 = 7356829340937886593LL;
signed char var_15 = (signed char)41;
long long int var_16 = -2337822341120832694LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
