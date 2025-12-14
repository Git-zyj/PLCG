#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7957543010023581582LL;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)47;
int zero = 0;
unsigned long long int var_12 = 3842854320804032967ULL;
signed char var_13 = (signed char)123;
unsigned int var_14 = 1913445996U;
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
