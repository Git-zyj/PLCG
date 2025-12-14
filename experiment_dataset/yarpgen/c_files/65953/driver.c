#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10744270388244352146ULL;
unsigned long long int var_6 = 15859714815390302091ULL;
unsigned long long int var_7 = 12074165683507054194ULL;
unsigned int var_11 = 2542940299U;
int zero = 0;
signed char var_12 = (signed char)-95;
unsigned int var_13 = 4252585830U;
signed char var_14 = (signed char)-95;
unsigned int var_15 = 1692471473U;
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
