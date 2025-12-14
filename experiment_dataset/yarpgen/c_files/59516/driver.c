#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1506440879;
unsigned short var_5 = (unsigned short)40887;
unsigned long long int var_11 = 5630333636087919979ULL;
int zero = 0;
unsigned long long int var_15 = 7813844300954047051ULL;
unsigned short var_16 = (unsigned short)15247;
unsigned char var_17 = (unsigned char)210;
signed char var_18 = (signed char)-23;
void init() {
}

void checksum() {
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
