#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)6537;
unsigned short var_10 = (unsigned short)1247;
int var_11 = -1056146648;
unsigned long long int var_12 = 13478332744023440659ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -6763696500170247198LL;
unsigned short var_15 = (unsigned short)649;
void init() {
}

void checksum() {
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
