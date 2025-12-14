#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-29;
unsigned int var_9 = 1802602812U;
unsigned long long int var_14 = 10688654116591986155ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 537811498U;
int var_19 = 631032599;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
