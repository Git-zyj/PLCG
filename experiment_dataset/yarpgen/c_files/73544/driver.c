#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 4159507369471365411ULL;
long long int var_6 = -6526025025145800337LL;
unsigned long long int var_7 = 14800374530715211055ULL;
int zero = 0;
unsigned long long int var_10 = 12540694145656196927ULL;
short var_11 = (short)5235;
_Bool var_12 = (_Bool)0;
long long int var_13 = 5665112074756881323LL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 6012155785201062666ULL;
int var_16 = -488363673;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
