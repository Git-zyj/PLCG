#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12730181439455942602ULL;
int var_8 = 750168602;
unsigned int var_14 = 4026689557U;
int zero = 0;
unsigned short var_18 = (unsigned short)57171;
unsigned short var_19 = (unsigned short)12764;
unsigned long long int var_20 = 7732822591176990942ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
