#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
unsigned int var_4 = 1745933364U;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
int var_17 = 1397562702;
int var_18 = -252447066;
unsigned long long int var_19 = 8987525583948281466ULL;
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
