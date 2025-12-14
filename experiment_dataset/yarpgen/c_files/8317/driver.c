#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2434370887U;
unsigned short var_9 = (unsigned short)30834;
unsigned char var_10 = (unsigned char)210;
unsigned int var_11 = 2294264792U;
unsigned int var_12 = 3680801628U;
int zero = 0;
unsigned short var_13 = (unsigned short)35647;
long long int var_14 = -6061549582418375558LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
