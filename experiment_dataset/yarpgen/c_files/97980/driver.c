#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
unsigned char var_2 = (unsigned char)123;
int var_3 = 798741675;
signed char var_6 = (signed char)37;
unsigned int var_7 = 642637697U;
unsigned int var_8 = 2681283717U;
int var_10 = -965072358;
int zero = 0;
long long int var_11 = 7760139754750240270LL;
unsigned short var_12 = (unsigned short)58560;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11837054083990717244ULL;
int var_15 = -725351365;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
