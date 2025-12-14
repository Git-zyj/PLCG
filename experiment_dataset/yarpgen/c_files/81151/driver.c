#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)14;
unsigned long long int var_8 = 18005518228391078447ULL;
int var_9 = 990139967;
long long int var_13 = -267339862336450746LL;
int zero = 0;
long long int var_14 = -2727145771284681162LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 4869037786658383449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
