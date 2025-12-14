#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5527880368727183684LL;
short var_4 = (short)-8629;
unsigned long long int var_6 = 12924447468530135009ULL;
unsigned int var_7 = 2839884996U;
short var_9 = (short)20134;
int zero = 0;
signed char var_12 = (signed char)-111;
unsigned char var_13 = (unsigned char)92;
void init() {
}

void checksum() {
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
