#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5785424662477200897LL;
long long int var_2 = -7629723577158288583LL;
signed char var_4 = (signed char)87;
unsigned char var_8 = (unsigned char)46;
unsigned char var_10 = (unsigned char)29;
long long int var_11 = -6070752755862323367LL;
int zero = 0;
long long int var_17 = 8163608913650465238LL;
int var_18 = -1451653899;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
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
