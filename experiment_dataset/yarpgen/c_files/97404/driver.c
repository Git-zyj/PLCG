#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4279883154U;
long long int var_12 = 1135156714935920070LL;
long long int var_14 = 5835665115902727964LL;
int zero = 0;
unsigned int var_15 = 1739549236U;
unsigned int var_16 = 374942686U;
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
