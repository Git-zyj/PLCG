#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15100076627429259111ULL;
unsigned int var_6 = 59280438U;
unsigned int var_10 = 123787894U;
int zero = 0;
unsigned long long int var_13 = 17843940586853765711ULL;
signed char var_14 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
