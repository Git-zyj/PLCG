#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38584;
signed char var_2 = (signed char)96;
long long int var_3 = -1532761443777420473LL;
unsigned short var_8 = (unsigned short)36850;
int zero = 0;
short var_10 = (short)-13358;
short var_11 = (short)-26660;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 540709958997685539ULL;
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
