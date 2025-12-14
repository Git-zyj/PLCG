#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2864175779U;
unsigned int var_8 = 1112293318U;
unsigned int var_9 = 1121048658U;
unsigned long long int var_10 = 3834214320031152230ULL;
signed char var_11 = (signed char)-106;
int zero = 0;
int var_12 = -492946004;
signed char var_13 = (signed char)55;
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
