#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2662931927U;
unsigned int var_1 = 3623207985U;
unsigned int var_6 = 4025825197U;
unsigned int var_7 = 4223104786U;
unsigned int var_8 = 136480864U;
unsigned int var_18 = 1923390159U;
int zero = 0;
unsigned int var_19 = 3646781161U;
unsigned int var_20 = 6080868U;
unsigned int var_21 = 2753390013U;
unsigned int var_22 = 1840357358U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
