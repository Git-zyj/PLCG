#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6426;
unsigned long long int var_6 = 16541402763969929869ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-28;
int zero = 0;
short var_16 = (short)4243;
unsigned short var_17 = (unsigned short)11402;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
