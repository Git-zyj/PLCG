#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)-47;
long long int var_9 = 7497414238265051894LL;
unsigned long long int var_10 = 17603397807849739822ULL;
unsigned long long int var_17 = 1226808085350703009ULL;
unsigned long long int var_18 = 10283364551848924536ULL;
int zero = 0;
long long int var_19 = -9032960927386228277LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-91;
long long int var_22 = -196033722327853566LL;
long long int var_23 = -601391051079859698LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
