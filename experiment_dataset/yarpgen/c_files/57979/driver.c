#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4839833602462012428LL;
unsigned short var_5 = (unsigned short)21305;
unsigned long long int var_10 = 12086006032059504512ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)164;
long long int var_19 = 3527457921225429463LL;
unsigned short var_20 = (unsigned short)13916;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
