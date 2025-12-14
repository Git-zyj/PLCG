#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18706;
unsigned int var_5 = 1981388428U;
signed char var_7 = (signed char)-126;
unsigned int var_8 = 1468781986U;
int var_9 = -648770432;
int zero = 0;
signed char var_18 = (signed char)-109;
unsigned int var_19 = 2046240319U;
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
