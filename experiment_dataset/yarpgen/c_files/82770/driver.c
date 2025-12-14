#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3245;
long long int var_1 = 972386531751221392LL;
long long int var_7 = -9108835686058756638LL;
unsigned short var_10 = (unsigned short)48329;
signed char var_11 = (signed char)-7;
int zero = 0;
long long int var_12 = 1915871943353645691LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)94;
signed char var_15 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
