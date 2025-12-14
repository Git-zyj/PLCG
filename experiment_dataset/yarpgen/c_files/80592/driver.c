#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1997663177;
unsigned char var_2 = (unsigned char)48;
signed char var_6 = (signed char)-109;
int zero = 0;
unsigned long long int var_10 = 4109584046125495794ULL;
unsigned long long int var_11 = 3744313811201797716ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
