#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26831;
unsigned long long int var_2 = 10298330090224892826ULL;
signed char var_3 = (signed char)18;
unsigned char var_8 = (unsigned char)246;
int var_12 = -1490556865;
int var_15 = -1034842305;
int zero = 0;
long long int var_16 = -7385704931747624427LL;
long long int var_17 = 3610252114892723281LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
