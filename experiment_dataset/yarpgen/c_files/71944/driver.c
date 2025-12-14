#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)73;
_Bool var_6 = (_Bool)1;
unsigned short var_10 = (unsigned short)57653;
unsigned long long int var_18 = 9117453438862176515ULL;
int zero = 0;
long long int var_19 = -4232012616107540885LL;
unsigned int var_20 = 4116313126U;
void init() {
}

void checksum() {
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
