#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1620465061;
signed char var_9 = (signed char)-89;
int zero = 0;
signed char var_13 = (signed char)-100;
long long int var_14 = 8586307206146026581LL;
unsigned long long int var_15 = 3110607016917979451ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
