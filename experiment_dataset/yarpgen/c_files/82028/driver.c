#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31220;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)39;
unsigned short var_9 = (unsigned short)46318;
int zero = 0;
signed char var_12 = (signed char)-113;
unsigned int var_13 = 911669989U;
unsigned int var_14 = 752356168U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
