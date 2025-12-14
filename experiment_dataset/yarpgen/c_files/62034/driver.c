#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2303645309423270469LL;
short var_5 = (short)16649;
long long int var_6 = 2058967389116237379LL;
unsigned int var_13 = 2692164875U;
int zero = 0;
long long int var_14 = -9117220492178065869LL;
unsigned short var_15 = (unsigned short)23923;
void init() {
}

void checksum() {
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
