#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 283651550U;
unsigned short var_2 = (unsigned short)31281;
unsigned short var_3 = (unsigned short)38257;
signed char var_4 = (signed char)40;
int var_9 = -1831848293;
int zero = 0;
signed char var_10 = (signed char)48;
unsigned short var_11 = (unsigned short)5776;
unsigned int var_12 = 394586651U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
