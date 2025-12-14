#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 7048629228871295661LL;
long long int var_3 = 9147291060393782225LL;
long long int var_7 = 2437640093892531463LL;
long long int var_8 = -5670686378453884381LL;
unsigned short var_9 = (unsigned short)13769;
unsigned short var_11 = (unsigned short)15894;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 4328224183722010571LL;
int var_16 = -1616941511;
long long int var_17 = -4077847913950623612LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
