#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1140467152;
unsigned short var_2 = (unsigned short)34558;
unsigned int var_8 = 4224457149U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 17304179936131300893ULL;
unsigned long long int var_20 = 49996362263842016ULL;
unsigned long long int var_21 = 11455451615736520030ULL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
