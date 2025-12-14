#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)7;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 13354510159540264009ULL;
unsigned int var_21 = 3380481861U;
unsigned char var_22 = (unsigned char)3;
unsigned int var_23 = 2787068757U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
