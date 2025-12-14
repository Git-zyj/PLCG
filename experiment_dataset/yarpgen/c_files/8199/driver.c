#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 16304093580126009245ULL;
long long int var_3 = -450147200917176691LL;
long long int var_4 = -5415265490107494624LL;
unsigned short var_7 = (unsigned short)41774;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 2293379725130842682ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 32103473100381981ULL;
unsigned long long int var_15 = 5382595741787978307ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
