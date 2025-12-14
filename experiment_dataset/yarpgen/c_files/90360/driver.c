#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8782522103787190328LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 1467249869746198370ULL;
int var_10 = -263300984;
unsigned long long int var_14 = 5193967579751155971ULL;
unsigned int var_17 = 1277396478U;
int zero = 0;
long long int var_19 = 6664413847694659124LL;
long long int var_20 = -1896619176293095670LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
