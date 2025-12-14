#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1483942477545929854LL;
int var_9 = 242302179;
unsigned long long int var_10 = 5535825986088663495ULL;
unsigned int var_12 = 793241526U;
long long int var_16 = 6127044387067315655LL;
int zero = 0;
unsigned int var_20 = 2311286178U;
signed char var_21 = (signed char)103;
unsigned long long int var_22 = 5382207069815680226ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
