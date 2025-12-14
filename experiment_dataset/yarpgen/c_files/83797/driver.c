#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1498596695;
signed char var_11 = (signed char)-90;
signed char var_12 = (signed char)8;
int zero = 0;
unsigned long long int var_15 = 13386171946517626101ULL;
long long int var_16 = 5219234531566330775LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
