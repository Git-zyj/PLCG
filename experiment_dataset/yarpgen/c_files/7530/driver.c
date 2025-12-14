#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1006694079;
unsigned char var_5 = (unsigned char)28;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 12467427725424585095ULL;
short var_21 = (short)19939;
_Bool var_22 = (_Bool)1;
short var_23 = (short)198;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
