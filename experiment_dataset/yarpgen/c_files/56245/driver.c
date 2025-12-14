#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7198115129882260879ULL;
unsigned int var_1 = 782435128U;
int var_4 = 479404191;
unsigned int var_8 = 58760370U;
unsigned int var_9 = 1630702894U;
int zero = 0;
signed char var_11 = (signed char)56;
short var_12 = (short)-7972;
unsigned char var_13 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
