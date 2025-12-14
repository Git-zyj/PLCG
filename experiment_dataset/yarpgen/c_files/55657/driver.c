#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4023833140U;
long long int var_5 = 9150038605021661915LL;
short var_6 = (short)9187;
int zero = 0;
unsigned long long int var_12 = 6349763739983717717ULL;
signed char var_13 = (signed char)-49;
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
