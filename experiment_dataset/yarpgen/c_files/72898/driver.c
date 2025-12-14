#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2656562413U;
int var_5 = 113597181;
unsigned short var_12 = (unsigned short)4180;
int zero = 0;
unsigned int var_16 = 2927554880U;
long long int var_17 = 4606728348391573576LL;
signed char var_18 = (signed char)37;
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
