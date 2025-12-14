#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7876001468370340837ULL;
unsigned long long int var_5 = 1561833707564738588ULL;
unsigned short var_6 = (unsigned short)2043;
unsigned long long int var_8 = 17218219704918755354ULL;
signed char var_10 = (signed char)-62;
unsigned short var_13 = (unsigned short)37037;
int zero = 0;
unsigned int var_17 = 97229167U;
unsigned short var_18 = (unsigned short)42874;
void init() {
}

void checksum() {
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
