#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)9;
long long int var_4 = -5478140015204833079LL;
long long int var_5 = 7689866332930180690LL;
long long int var_7 = 1532085994627551554LL;
unsigned short var_8 = (unsigned short)20019;
unsigned int var_9 = 3733390541U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 15403191213999453921ULL;
long long int var_18 = 7950234183760150936LL;
signed char var_19 = (signed char)117;
unsigned short var_20 = (unsigned short)25150;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
