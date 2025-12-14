#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27399;
long long int var_3 = -2628815672636627793LL;
int var_6 = 294144114;
unsigned int var_9 = 3148176422U;
int zero = 0;
signed char var_16 = (signed char)-120;
unsigned short var_17 = (unsigned short)57963;
int var_18 = -1159102185;
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
