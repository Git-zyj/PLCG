#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3760065357U;
int var_6 = 597489154;
short var_10 = (short)19874;
int zero = 0;
unsigned int var_11 = 4090930323U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-98;
int var_14 = 1973071034;
unsigned short var_15 = (unsigned short)25077;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
