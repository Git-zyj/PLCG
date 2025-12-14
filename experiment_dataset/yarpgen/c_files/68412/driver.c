#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1310903324U;
unsigned int var_3 = 2439884537U;
unsigned long long int var_6 = 10108299437949997383ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-120;
unsigned short var_20 = (unsigned short)23521;
void init() {
}

void checksum() {
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
