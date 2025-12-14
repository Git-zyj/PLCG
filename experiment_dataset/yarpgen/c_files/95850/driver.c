#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8816277581913782851ULL;
int var_2 = 1454947540;
long long int var_3 = 2849262033108666863LL;
unsigned int var_4 = 3798521592U;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 10301310636260631280ULL;
unsigned long long int var_11 = 3935630276396711569ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
