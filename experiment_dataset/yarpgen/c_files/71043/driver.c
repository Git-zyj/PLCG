#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58786;
signed char var_9 = (signed char)-75;
signed char var_12 = (signed char)75;
unsigned short var_15 = (unsigned short)52208;
int zero = 0;
long long int var_19 = 1909600552759450446LL;
signed char var_20 = (signed char)51;
int var_21 = -1336256884;
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
