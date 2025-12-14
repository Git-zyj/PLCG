#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-35;
long long int var_2 = 3595827073910412108LL;
long long int var_3 = -7230581705702532468LL;
signed char var_6 = (signed char)-123;
long long int var_7 = -7358129637572862986LL;
signed char var_9 = (signed char)-102;
signed char var_12 = (signed char)-66;
unsigned int var_13 = 3813129711U;
int zero = 0;
signed char var_17 = (signed char)-95;
signed char var_18 = (signed char)37;
unsigned int var_19 = 2818432072U;
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
