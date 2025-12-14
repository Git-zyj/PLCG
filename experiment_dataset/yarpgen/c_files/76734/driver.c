#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)57130;
unsigned short var_9 = (unsigned short)522;
unsigned short var_13 = (unsigned short)57811;
int zero = 0;
long long int var_18 = -3247657652141111638LL;
unsigned int var_19 = 4138774189U;
void init() {
}

void checksum() {
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
