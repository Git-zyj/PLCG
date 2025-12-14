#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
unsigned short var_3 = (unsigned short)15114;
unsigned int var_8 = 3512133846U;
long long int var_10 = -3133899125807236574LL;
int var_15 = 1715914778;
int zero = 0;
unsigned char var_17 = (unsigned char)110;
unsigned short var_18 = (unsigned short)17492;
signed char var_19 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
