#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -53420715;
unsigned long long int var_3 = 13129201399688663057ULL;
int var_4 = -1777600919;
int var_5 = -554736829;
unsigned long long int var_11 = 7967664869988069835ULL;
int zero = 0;
int var_18 = -1943835494;
signed char var_19 = (signed char)-78;
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
