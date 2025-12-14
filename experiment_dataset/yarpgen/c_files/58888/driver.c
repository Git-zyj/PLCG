#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)196;
unsigned char var_9 = (unsigned char)72;
signed char var_10 = (signed char)-26;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)14;
signed char var_16 = (signed char)-92;
unsigned char var_17 = (unsigned char)55;
int var_18 = -1059249052;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
