#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3916845543U;
long long int var_5 = -3537779646565547086LL;
_Bool var_7 = (_Bool)1;
int var_12 = -1449526318;
unsigned short var_17 = (unsigned short)42040;
int zero = 0;
long long int var_20 = -3520775778503100859LL;
long long int var_21 = 2236512040098426807LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
