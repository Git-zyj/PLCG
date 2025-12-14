#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = -4386562432327683466LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 1315100254;
unsigned char var_18 = (unsigned char)130;
unsigned short var_19 = (unsigned short)63485;
signed char var_20 = (signed char)110;
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
