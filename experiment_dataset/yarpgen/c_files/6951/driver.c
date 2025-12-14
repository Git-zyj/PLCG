#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
signed char var_2 = (signed char)21;
int var_3 = 1381208839;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
signed char var_14 = (signed char)-95;
unsigned short var_15 = (unsigned short)27151;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
