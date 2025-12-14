#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_6 = 1816511330;
unsigned long long int var_10 = 8538342297533488485ULL;
unsigned char var_11 = (unsigned char)11;
long long int var_17 = 9044636535182479430LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)157;
int var_20 = 1157542584;
unsigned long long int var_21 = 5360442702203595648ULL;
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
