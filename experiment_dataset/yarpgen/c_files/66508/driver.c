#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1050204869118665524LL;
_Bool var_2 = (_Bool)0;
long long int var_5 = -7414568189016960355LL;
unsigned short var_7 = (unsigned short)21443;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 1567452585U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
