#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35707;
int var_3 = 2115012275;
unsigned long long int var_4 = 1742631039654007775ULL;
unsigned int var_6 = 3717644289U;
long long int var_7 = -2670913040868693633LL;
signed char var_8 = (signed char)-4;
long long int var_12 = 2743617027613947987LL;
unsigned int var_16 = 3380864272U;
int zero = 0;
unsigned short var_19 = (unsigned short)6193;
long long int var_20 = -4488801816628662571LL;
unsigned int var_21 = 900877550U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
