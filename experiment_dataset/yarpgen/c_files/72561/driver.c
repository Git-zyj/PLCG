#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
unsigned long long int var_2 = 9550921785608157692ULL;
int var_5 = 80777474;
_Bool var_10 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_19 = 1699958612632686338LL;
unsigned long long int var_20 = 1708271262318722439ULL;
unsigned short var_21 = (unsigned short)13794;
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
