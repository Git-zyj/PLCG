#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4984451019401388580LL;
unsigned short var_1 = (unsigned short)22034;
unsigned short var_18 = (unsigned short)34761;
int zero = 0;
long long int var_19 = -6115144617655529747LL;
signed char var_20 = (signed char)-62;
int var_21 = 1407510986;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
