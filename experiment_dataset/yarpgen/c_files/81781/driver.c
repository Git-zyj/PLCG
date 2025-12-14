#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31428;
signed char var_2 = (signed char)-114;
short var_4 = (short)1034;
long long int var_6 = -2625513477276624718LL;
signed char var_10 = (signed char)-58;
int zero = 0;
unsigned short var_12 = (unsigned short)59345;
unsigned short var_13 = (unsigned short)42599;
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
