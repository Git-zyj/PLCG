#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5089680480988084891LL;
long long int var_2 = 2892700990242837077LL;
long long int var_8 = 937801195502389286LL;
long long int var_9 = -4884737678209671362LL;
int zero = 0;
long long int var_20 = 855459964539000953LL;
long long int var_21 = 6630507565183364223LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
