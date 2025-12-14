#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 223878563;
unsigned int var_3 = 1063304731U;
long long int var_7 = -5078540689817134146LL;
unsigned long long int var_9 = 14595414512184664438ULL;
int zero = 0;
short var_11 = (short)389;
long long int var_12 = 99302002885692569LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
