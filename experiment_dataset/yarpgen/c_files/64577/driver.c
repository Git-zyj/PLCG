#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2646471850U;
unsigned short var_4 = (unsigned short)24400;
signed char var_11 = (signed char)-11;
int var_12 = 1729211109;
int zero = 0;
unsigned int var_17 = 4258326731U;
unsigned int var_18 = 3865362737U;
int var_19 = -403510833;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
