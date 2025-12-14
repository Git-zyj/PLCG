#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-37;
unsigned int var_6 = 4282131920U;
unsigned int var_7 = 2293734882U;
unsigned long long int var_8 = 17321699995475966942ULL;
unsigned int var_10 = 2675457865U;
unsigned int var_13 = 326603834U;
int zero = 0;
unsigned int var_16 = 615182413U;
_Bool var_17 = (_Bool)0;
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
