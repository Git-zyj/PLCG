#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1595919265;
int var_3 = 587855677;
signed char var_4 = (signed char)-34;
unsigned short var_9 = (unsigned short)58250;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -554323731;
signed char var_14 = (signed char)89;
unsigned long long int var_15 = 228780996308968347ULL;
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
