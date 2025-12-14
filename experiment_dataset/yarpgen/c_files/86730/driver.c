#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14214;
unsigned long long int var_3 = 1567761125026860744ULL;
unsigned int var_5 = 1612917392U;
signed char var_6 = (signed char)-95;
long long int var_8 = -7450814913459203089LL;
unsigned int var_9 = 3643223217U;
unsigned int var_13 = 2311180016U;
long long int var_15 = -7464175656448547822LL;
unsigned int var_16 = 2433823277U;
int zero = 0;
unsigned int var_17 = 1611156840U;
unsigned int var_18 = 3168178645U;
signed char var_19 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
