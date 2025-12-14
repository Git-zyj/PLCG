#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2676670317U;
int var_5 = -1611019686;
int var_7 = -1458480358;
int zero = 0;
signed char var_13 = (signed char)-114;
long long int var_14 = -2597041947291406470LL;
unsigned long long int var_15 = 6302970525238789292ULL;
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
