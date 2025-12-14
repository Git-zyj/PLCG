#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1660280660;
long long int var_1 = 4901510416358692066LL;
unsigned short var_3 = (unsigned short)15686;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_10 = 441927326;
unsigned int var_11 = 3719557566U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
