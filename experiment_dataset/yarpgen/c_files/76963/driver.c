#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6810171801923279375LL;
unsigned short var_12 = (unsigned short)42080;
signed char var_14 = (signed char)35;
unsigned short var_15 = (unsigned short)45987;
int zero = 0;
signed char var_16 = (signed char)17;
unsigned short var_17 = (unsigned short)20707;
signed char var_18 = (signed char)-98;
void init() {
}

void checksum() {
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
