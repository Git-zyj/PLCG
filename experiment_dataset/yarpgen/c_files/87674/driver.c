#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
signed char var_1 = (signed char)-123;
_Bool var_7 = (_Bool)0;
unsigned int var_10 = 2459835104U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8087363277721271672ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
