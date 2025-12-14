#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4945908051279684318ULL;
int var_2 = -922038946;
int var_3 = -1763074359;
unsigned int var_6 = 1490420588U;
int var_7 = 1461611001;
int var_8 = -1054257669;
unsigned long long int var_9 = 10396278214032983174ULL;
int zero = 0;
unsigned int var_11 = 1042913165U;
signed char var_12 = (signed char)24;
unsigned char var_13 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
