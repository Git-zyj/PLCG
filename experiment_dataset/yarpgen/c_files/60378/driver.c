#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 391476316;
short var_2 = (short)278;
long long int var_4 = -4236553142590682265LL;
unsigned char var_7 = (unsigned char)77;
short var_11 = (short)-7443;
int zero = 0;
short var_13 = (short)-28754;
unsigned char var_14 = (unsigned char)213;
_Bool var_15 = (_Bool)1;
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
