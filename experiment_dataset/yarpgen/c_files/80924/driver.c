#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4806214232344133349LL;
signed char var_9 = (signed char)-53;
long long int var_12 = -3501718786671166450LL;
int zero = 0;
signed char var_13 = (signed char)-90;
signed char var_14 = (signed char)-110;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-19;
unsigned int var_17 = 1706789005U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
