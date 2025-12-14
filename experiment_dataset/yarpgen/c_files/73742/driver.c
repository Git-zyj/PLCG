#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16967;
int var_8 = -1488267322;
int zero = 0;
unsigned short var_10 = (unsigned short)64566;
signed char var_11 = (signed char)-28;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1086639708U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
