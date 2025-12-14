#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 824746385U;
signed char var_11 = (signed char)2;
int var_12 = 2002526518;
signed char var_13 = (signed char)-51;
int zero = 0;
int var_18 = -1084894757;
unsigned long long int var_19 = 18164468570373911809ULL;
void init() {
}

void checksum() {
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
