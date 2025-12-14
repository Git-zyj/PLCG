#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_5 = -5262390721209682568LL;
short var_6 = (short)27070;
unsigned long long int var_7 = 7427862542843402606ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)-18006;
long long int var_11 = 1162523116737261677LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
