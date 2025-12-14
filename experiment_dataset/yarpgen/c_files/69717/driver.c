#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-95;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)106;
unsigned short var_16 = (unsigned short)29017;
long long int var_17 = -2715364366822412301LL;
int zero = 0;
signed char var_19 = (signed char)40;
short var_20 = (short)13716;
unsigned short var_21 = (unsigned short)24404;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
