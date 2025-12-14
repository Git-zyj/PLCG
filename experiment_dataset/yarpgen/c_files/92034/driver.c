#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -4505655127174172920LL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 3140089700U;
int zero = 0;
long long int var_16 = -1119482041776205310LL;
unsigned short var_17 = (unsigned short)58966;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
