#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5368904873716900750LL;
unsigned int var_2 = 863697044U;
int var_3 = -597333782;
short var_4 = (short)-24204;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1595534734U;
unsigned int var_13 = 1801551856U;
unsigned int var_14 = 715213161U;
unsigned int var_15 = 3104629354U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
