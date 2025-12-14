#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned long long int var_2 = 2117366914133530577ULL;
int var_4 = -1214588661;
unsigned long long int var_8 = 17104662503037279805ULL;
int zero = 0;
unsigned int var_12 = 356705385U;
unsigned long long int var_13 = 7011953309006684003ULL;
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
