#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12542688447544595321ULL;
long long int var_1 = -3766314047373917401LL;
unsigned int var_2 = 3050510215U;
signed char var_3 = (signed char)-105;
long long int var_4 = -4942779626160241954LL;
long long int var_5 = -4507607651699272444LL;
unsigned long long int var_7 = 13587478975669629681ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-78;
signed char var_16 = (signed char)-93;
long long int var_17 = -5566536140497704668LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
