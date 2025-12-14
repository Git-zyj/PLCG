#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)8620;
long long int var_4 = -1580343100789957457LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = -7223682016975283373LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1953208869301785906LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
