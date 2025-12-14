#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 17615309701176835194ULL;
short var_2 = (short)-30483;
unsigned long long int var_3 = 7534357106009596842ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14407338032515200131ULL;
int zero = 0;
unsigned long long int var_11 = 10345635302120770136ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)16441;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 16043908527030577686ULL;
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
