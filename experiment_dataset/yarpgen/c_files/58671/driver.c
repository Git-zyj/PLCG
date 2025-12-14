#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = 1211814210;
signed char var_6 = (signed char)123;
unsigned long long int var_7 = 37790610822228420ULL;
int zero = 0;
long long int var_11 = -1670271330878418032LL;
long long int var_12 = 2865634794887751296LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
