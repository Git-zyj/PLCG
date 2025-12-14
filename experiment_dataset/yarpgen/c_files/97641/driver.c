#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)90;
unsigned int var_8 = 3634720587U;
signed char var_12 = (signed char)43;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-51;
int var_15 = -1992937141;
void init() {
}

void checksum() {
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
