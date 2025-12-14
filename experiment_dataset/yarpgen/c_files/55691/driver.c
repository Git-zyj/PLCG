#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11246;
signed char var_6 = (signed char)-121;
signed char var_10 = (signed char)1;
unsigned int var_13 = 3380348779U;
int var_16 = 345658769;
int zero = 0;
unsigned int var_17 = 1569371420U;
long long int var_18 = -6936569359607535883LL;
int var_19 = 1685769005;
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
