#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13852;
int var_1 = 1301330726;
int var_5 = 1231626791;
unsigned int var_8 = 805632552U;
unsigned long long int var_11 = 5711584858305833986ULL;
int zero = 0;
short var_13 = (short)-20025;
unsigned long long int var_14 = 11911667903079456246ULL;
signed char var_15 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
