#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
int var_4 = -688777493;
_Bool var_6 = (_Bool)1;
long long int var_9 = 1522174752394546052LL;
unsigned long long int var_13 = 18268781304979652572ULL;
int zero = 0;
signed char var_14 = (signed char)33;
signed char var_15 = (signed char)-8;
void init() {
}

void checksum() {
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
