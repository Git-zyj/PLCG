#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1431446846U;
int var_2 = 288279076;
unsigned int var_9 = 232139904U;
unsigned short var_12 = (unsigned short)60588;
int zero = 0;
int var_16 = 684958699;
unsigned short var_17 = (unsigned short)23591;
signed char var_18 = (signed char)42;
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
