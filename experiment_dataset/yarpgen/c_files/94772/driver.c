#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36712;
signed char var_4 = (signed char)67;
signed char var_6 = (signed char)28;
int var_10 = 658920188;
unsigned char var_12 = (unsigned char)20;
unsigned char var_16 = (unsigned char)66;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -608955837561862582LL;
int var_19 = 1921832338;
unsigned int var_20 = 4096667209U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
