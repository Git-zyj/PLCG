#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
long long int var_6 = 2660692894651695576LL;
unsigned int var_9 = 3648415531U;
long long int var_12 = -143972171252928512LL;
int var_14 = 593648491;
int zero = 0;
unsigned short var_16 = (unsigned short)6251;
unsigned short var_17 = (unsigned short)25633;
unsigned int var_18 = 2382595347U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
