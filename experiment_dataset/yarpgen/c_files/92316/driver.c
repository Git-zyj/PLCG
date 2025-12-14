#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned long long int var_6 = 2194864368662533291ULL;
int var_9 = 578700631;
int var_10 = -926101145;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 403592301829542458ULL;
int var_13 = 169156182;
long long int var_14 = 3786574987518393812LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
