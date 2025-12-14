#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8909038558055922787LL;
unsigned int var_1 = 2163899770U;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2034006960U;
long long int var_9 = 8165304353956016490LL;
int zero = 0;
unsigned char var_19 = (unsigned char)130;
unsigned long long int var_20 = 4534444794490063396ULL;
signed char var_21 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
