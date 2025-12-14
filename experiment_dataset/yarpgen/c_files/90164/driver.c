#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 15424462400146135158ULL;
int var_9 = 1302527755;
int zero = 0;
unsigned short var_11 = (unsigned short)48183;
signed char var_12 = (signed char)-112;
long long int var_13 = -5514874170321035289LL;
int var_14 = -1011390648;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
