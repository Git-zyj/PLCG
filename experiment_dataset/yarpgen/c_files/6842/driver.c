#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2458301858677763496LL;
int var_3 = 1497673618;
unsigned int var_4 = 4141238642U;
unsigned int var_6 = 778244560U;
int var_7 = 2084906130;
long long int var_9 = 3074772431840520463LL;
int zero = 0;
unsigned char var_10 = (unsigned char)238;
long long int var_11 = 5184962367000912754LL;
_Bool var_12 = (_Bool)0;
int var_13 = 2065005923;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
