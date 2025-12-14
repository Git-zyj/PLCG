#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1840965492710854725LL;
unsigned int var_2 = 1011529388U;
signed char var_8 = (signed char)78;
unsigned long long int var_10 = 3871820624946089531ULL;
unsigned char var_11 = (unsigned char)193;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -2124649993468637523LL;
long long int var_14 = -927290341350380129LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
