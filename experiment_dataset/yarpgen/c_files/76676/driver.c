#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2625080569U;
signed char var_4 = (signed char)36;
long long int var_8 = -8557686242403302858LL;
long long int var_12 = 7332285093518933365LL;
int zero = 0;
short var_14 = (short)-31539;
unsigned long long int var_15 = 5056337017225532451ULL;
int var_16 = -130836948;
unsigned int var_17 = 3704591689U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
