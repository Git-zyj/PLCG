#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3429545270U;
unsigned char var_7 = (unsigned char)12;
long long int var_8 = 6023350241342660247LL;
int zero = 0;
signed char var_13 = (signed char)-1;
short var_14 = (short)11279;
void init() {
}

void checksum() {
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
