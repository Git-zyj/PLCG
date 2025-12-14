#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1824953798U;
unsigned short var_5 = (unsigned short)43216;
short var_7 = (short)19098;
int zero = 0;
unsigned long long int var_11 = 6012085443379863840ULL;
long long int var_12 = -2752659746648128545LL;
long long int var_13 = 4799903158660736216LL;
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
