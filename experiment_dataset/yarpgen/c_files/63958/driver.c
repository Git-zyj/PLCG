#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8427;
_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 2745089175442427018ULL;
signed char var_7 = (signed char)97;
int zero = 0;
unsigned long long int var_13 = 10625884209580554574ULL;
long long int var_14 = -8429397613632851046LL;
unsigned long long int var_15 = 7108760881774141339ULL;
signed char var_16 = (signed char)-17;
void init() {
}

void checksum() {
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
