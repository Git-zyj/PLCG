#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)57464;
signed char var_9 = (signed char)44;
unsigned int var_10 = 4074887343U;
unsigned int var_12 = 299121508U;
int zero = 0;
unsigned short var_13 = (unsigned short)28459;
long long int var_14 = 9048409385003584778LL;
void init() {
}

void checksum() {
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
