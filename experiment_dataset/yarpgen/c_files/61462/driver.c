#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4077562602U;
int var_1 = 515314865;
signed char var_2 = (signed char)-69;
int var_3 = -177333770;
unsigned long long int var_6 = 6645834838032625839ULL;
unsigned long long int var_9 = 16400880444963544948ULL;
int zero = 0;
int var_12 = -1178313507;
int var_13 = 1167873841;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
