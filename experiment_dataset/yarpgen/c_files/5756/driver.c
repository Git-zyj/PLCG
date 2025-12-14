#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1005931640;
short var_4 = (short)-9310;
short var_5 = (short)-27692;
int var_7 = -1779258067;
unsigned long long int var_10 = 15731638360466434753ULL;
long long int var_12 = 4265691487163785637LL;
int var_13 = 2118998098;
signed char var_14 = (signed char)20;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_20 = (short)-6269;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
