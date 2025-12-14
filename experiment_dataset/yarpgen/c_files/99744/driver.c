#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8766338628506039711LL;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-19964;
long long int var_6 = 1686661145319085645LL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-69;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = -415302047950443204LL;
unsigned long long int var_15 = 16378940591715296913ULL;
long long int var_16 = 5650281010344021570LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
