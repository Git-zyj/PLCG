#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-11382;
unsigned int var_10 = 2345523488U;
unsigned char var_11 = (unsigned char)192;
int var_13 = 1965488957;
_Bool var_14 = (_Bool)1;
long long int var_15 = -4420378899874562063LL;
unsigned long long int var_18 = 10382158134216544692ULL;
int zero = 0;
int var_19 = 1621709411;
unsigned long long int var_20 = 2409964631416128507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
