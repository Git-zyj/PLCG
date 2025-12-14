#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1496908144U;
short var_4 = (short)12411;
unsigned char var_9 = (unsigned char)69;
unsigned char var_10 = (unsigned char)57;
int var_11 = 344014315;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)61;
unsigned int var_16 = 3513022277U;
signed char var_17 = (signed char)-49;
void init() {
}

void checksum() {
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
