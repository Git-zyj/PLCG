#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1536523106;
unsigned int var_10 = 1114723887U;
long long int var_13 = -4475622938548421872LL;
signed char var_17 = (signed char)59;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1524772974U;
void init() {
}

void checksum() {
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
