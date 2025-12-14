#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 401229388084832672LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-23748;
unsigned long long int var_7 = 13727999689876038988ULL;
signed char var_9 = (signed char)77;
signed char var_10 = (signed char)12;
int zero = 0;
long long int var_11 = 4365823261744203110LL;
unsigned int var_12 = 3206033677U;
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
