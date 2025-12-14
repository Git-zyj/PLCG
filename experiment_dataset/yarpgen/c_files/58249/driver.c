#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1825581495;
unsigned long long int var_1 = 3323229202914012123ULL;
unsigned int var_4 = 510995709U;
_Bool var_9 = (_Bool)1;
int var_14 = -1724306494;
unsigned int var_19 = 3422577448U;
int zero = 0;
unsigned long long int var_20 = 4772041090486310168ULL;
short var_21 = (short)-7193;
signed char var_22 = (signed char)19;
void init() {
}

void checksum() {
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
