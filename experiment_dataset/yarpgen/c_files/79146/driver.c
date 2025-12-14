#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2232138599U;
unsigned long long int var_5 = 57433956037058685ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-113;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)196;
void init() {
}

void checksum() {
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
