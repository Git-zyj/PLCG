#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1145433599;
int var_2 = 1038343943;
long long int var_3 = 4539058767181684801LL;
int var_4 = -398114866;
int var_5 = -2140053720;
_Bool var_7 = (_Bool)0;
long long int var_8 = 4607172403139609866LL;
int var_9 = 2102466105;
int var_10 = -450068327;
long long int var_11 = 5378895690694841734LL;
int zero = 0;
long long int var_12 = 1074900895948515386LL;
long long int var_13 = -2220190408945889918LL;
int var_14 = -1335636349;
int var_15 = 836707100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
